/*
* Fingers Crossed
*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf ((ll)1e18)
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;

//2^ceil(log2(x)) where x = Maximum size of Polynomial
const int MAX = 1048576;

//Complex class: Quite faster than in-built C++ library as it uses only functions required
template<typename T> class cmplx {
private:
	T x, y;
public:
	cmplx () : x(0.0), y(0.0) {}
	cmplx (T a) : x(a), y(0.0) {}
	cmplx (T a, T b) : x(a), y(b) {}
	T get_real() { return this->x; }
	T get_img() { return this->y; }
	cmplx conj() { return cmplx(this->x, -(this->y)); }
	cmplx operator = (const cmplx& a) { this->x = a.x; this->y = a.y; return *this; }
	cmplx operator + (const cmplx& b) { return cmplx(this->x + b.x, this->y + b.y); }
	cmplx operator - (const cmplx& b) { return cmplx(this->x - b.x, this->y - b.y); }
	cmplx operator * (const T& num) { return cmplx(this->x * num, this->y * num); }
	cmplx operator / (const T& num) { return cmplx(this->x / num, this->y / num); }
	cmplx operator * (const cmplx& b) {
		return cmplx(this->x * b.x - this->y * b.y, this->y * b.x + this->x * b.y);
	}
	cmplx operator / (const cmplx& b) {
		cmplx temp(b.x, -b.y); cmplx n = (*this) * temp;
		return n / (b.x * b.x + b.y * b.y);
	}
};

//T = int/long long as per polynomial coefficients
//S = double/long double as per precision required
template<typename T, typename S> struct FFT {
	S PI;
	int n, L, *rev, last;
	cmplx<S> ONE, ZERO;
	cmplx<S> *omega_powers;

	FFT() {
		PI = acos(-1.0);
		ONE = cmplx<S>(1.0, 0.0);
		ZERO = cmplx<S>(0.0, 0.0);
		last = -1;
		int req = 1 << (32 - __builtin_clz(MAX));
		rev = new int[req];
		omega_powers = new cmplx<S>[req];
	}

	~FFT() {
		delete rev;
		delete omega_powers;
	}

	void ReverseBits() {
		if (n != last) {
			for (int i = 1, j = 0; i < n; ++i) {
				int bit = n >> 1;
				for (; j >= bit; bit >>= 1) j -= bit;
				j += bit;
				rev[i] = j;
			}
		}
	}

	void DFT(vector<cmplx<S>> &A, bool inverse = false) {
		for(int i = 0; i < n; ++i)
			if (rev[i] > i) swap(A[i], A[rev[i]]);
		for (int s = 1; s <= L; s++) {
			int m = 1 << s, half = m / 2;
			cmplx<S> wm(cosl(2.0 * PI / m), sinl(2.0 * PI / m));
			if (inverse) wm = ONE / wm;
			omega_powers[0] = ONE;
			for(int k = 1; k < half; ++k) {
				omega_powers[k] = omega_powers[k-1] * wm;
			}
			for (int k = 0; k < n; k += m) {
				for (int j = 0; j < half; j++) {
					cmplx<S> t = omega_powers[j] * A[k + j + half];
					cmplx<S> u = A[k + j];
					A[k + j] = u + t;
					A[k + j + half] = u - t;
				}
			}
		}
		if (inverse) {
			for (int i = 0; i < n; i++) A[i] = A[i] / n;
		}
	}

	// c[k] = sum_{i=0}^k a[i] b[k-i]
	vector<T> multiply(const vector<T> &a, const vector<T> &b) {
		L = 0;
		int sa = a.size(), sb = b.size(), sc = sa + sb - 1;
		while ((1 << L) < sc) L++;
		n = 1 << L;
		ReverseBits();
		last = n;
		vector<cmplx<S>> aa(n, ZERO), bb(n, ZERO), cc;
		for (int i = 0; i < sa; ++i) aa[i] = cmplx<S>(a[i], 0);
		for (int i = 0; i < sb; ++i) bb[i] = cmplx<S>(b[i], 0);
		DFT(aa, false); DFT(bb, false);
		for (int i = 0; i < n; ++i) cc.push_back(aa[i] * bb[i]);
		DFT(cc, true);
		vector<T> ans(sc);
		for (int i = 0; i < sc; ++i) ans[i] = cc[i].get_real() + 0.5;
		return ans;
	}
};

int main()
{
    fast();
    ll n , m , p;
	vector<ll> a , b;
    fast();
    cin>>n>>m>>p;
    a.resize(n);
    b.resize(m);
    for(ll i = 0 ; i < n ; i++)
    	cin>>a[i];
    for(ll i = 0 ; i < m ; i++ )
    	cin>>b[i];
    FFT<ll , long double> f;
    vector<ll> res = f.multiply(a , b);    
    for(ll i = 0 ; i < res.size() ; i++ )
    {
    	if((res[i] % p) != 0)
    		return cout<<i<<endl, 0;

    }
}
