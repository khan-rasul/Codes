/*-----rk_98-----*/
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
		return a;
	vector<vector<ll> > temp = mat_expo(a,b/2,m,s), foo( s);
	for(ll i=0;i<s;i++)
	{
		foo[i].reserve(s);
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
					sum+= (foo[i][k]*a[k][j]) % m;
					sum%=m;
				}
				temp[i][j]=sum;
			}
		}
		return temp;
	}
	return foo;
}
int main()
{
    //fast();
    ll n,k;
    cin>>n>>k;
    vector<vector<ll> > foo( n , vector<ll>(n) );
    for( ll i=0 ;i<n;i++)
    {
    	for(ll j=0 ; j< n ; j++)
    		cin>>foo[i][j];
    }
    foo = mat_expo(foo , k , mod , n);
    ll ans=0;
    for(ll i=0 ; i < n ;i++)
    	for( ll j =0 ; j< n ; j++ )
    		ans  = (ans + foo[i][j]) % mod;
    cout<<ans<<endl;
}
