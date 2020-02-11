/*-----lusar98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
vector<vector<ll> > mat_expo (vector<vector<ll> > a, ll b , ll m, ll s)
{
	if(b==1)
	{
		return a;
	}
	vector<vector<ll> > temp = mat_expo(a,b/2,m,s), foo( s);
	for(ll i=0;i<s;i++)
	{
		foo[i].resize(s);
		for(ll j =0;j<s;j++)
		{
			ll sum=0;
			for(ll k =0;k<s;k++)
			{
				sum+= (temp[i][k]*temp[k][j]) % m;
				sum%=m;
			}
			foo[i][j]=sum;
		}
	}
	if(b %2)
	{
		for(ll i=0;i<s;i++)
		{
			for(ll j =0;j<s;j++)
			{
				ll sum=0;
				for(ll k =0;k<s;k++)
				{
					sum+= (a[i][k]*foo[k][j]) % m;
					sum%=m;
				}
				temp[i][j]=sum;
			}
		}
		return temp;
	}
	return foo;
}

ll power(ll a, ll b, ll m)
{
	if(b==1)
		return a % m;
	ll temp = power(a,b/2,m);
	temp = ( temp * temp ) % m;
	if(b % 2)
		temp= (a * temp) % m;
	return temp;
}

int main()
{
    //fast();
    ll n,f[3],c;
    cin>>n>>f[0]>>f[1]>>f[2]>>c;
    vector<vector<ll> > one = {{1,1,1},
							   {1,0,0},
							   {0,1,0}};
	vector<vector<ll> > two = {{1,1,1,1,1},
							   {1,0,0,0,0},
							   {0,1,0,0,0},
							   {0,0,0,1,1},
							   {0,0,0,0,1}};
	if(n<=3)
	{
		cout<<f[n-1];
		return 0;
	}
	vector<vector<ll> > three = mat_expo(two,n-3ll,mod-1,5),four = mat_expo(one,n-3ll,mod-1,3);
	ll p1 = power(f[0],four[0][2],mod) , p2 = power(f[1],four[0][1],mod) , p3 = power(f[2],four[0][0],mod);
	ll ans = ( ( ( ( (p1*p2) % mod ) * p3 ) % mod ) * power(c,three[0][4]*2,mod) ) % mod;
	cout<<ans;
}
