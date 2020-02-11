/*
* Look in my eyes, what do you see?
* I'm the cult of personality
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

// Matrix exponentiation template

const ll MAXSIZE = 2;
void mat_multiply(ll a[MAXSIZE][MAXSIZE], ll b[MAXSIZE][MAXSIZE]) 
{ 
    ll mul[MAXSIZE][MAXSIZE]; 
    for (ll i = 0 ; i < MAXSIZE ; i++) 
    { 
        for (ll j = 0 ; j < MAXSIZE ; j++) 
        { 
            mul[i][j] = 0; 
            for (ll k = 0 ; k < MAXSIZE ; k++) 
                mul[i][j] = (mul[i][j] + a[i][k] * b[k][j] % mod) % mod; 
        } 
    } 
    for (ll i = 0 ; i < MAXSIZE ; i++) 
        for (ll j = 0 ; j < MAXSIZE ; j++) 
            a[i][j] = mul[i][j];  
} 
void mat_expo(ll M[MAXSIZE][MAXSIZE] , ll n , ll ANS[MAXSIZE][MAXSIZE]) 
{ 
    if(n == 1) 
    {
        for(ll i = 0 ; i < MAXSIZE ; i++ )
            for(ll j = 0 ; j < MAXSIZE ; j++ )
                ANS[i][j] = M[i][j];
        return;
    }
    mat_expo(M , n / 2, ANS);
    mat_multiply(ANS , ANS);
    if(n & 1)
        mat_multiply(ANS , M);
} 

// End of template

int main()
{
    // fast();
    ll t;
    cin>>t;
    ll foo[2][2] = {{8 , mod - 15} , {1 , 0}} , ans[2][2] , arr[2] = {9 , 31};
    memset(ans , 0 , sizeof ans);
    while(t--)
    {
    	ll n;
    	cin>>n;
    	if(n <= 1)
    	{
    		cout<<arr[n]<<endl;
    		continue;
    	}
    	mat_expo(foo , n - 1 , ans);
    	cout<<(ans[0][0] * arr[1] % mod + ans[0][1] * arr[0] % mod) % mod<<endl;
    }
}
