/*-----lusar98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
using namespace std;
int main()
{
    //fast();
    ll T;
    cin>>T;
    while(T--)
    {
    	ll n,k;
    	cin>>n>>k;
    	ll x = (k+n-2)/(n-1) ;
    	ll part;
    	if(x%2)
    	{
    		part = ( ( ( ( x % mod) * ( ( (x+1)/2 ) % mod) ) % mod) - (x % mod) + mod ) % mod;
    	}
    	else
    	{
    		part = ( ( ( ( (x+1) % mod) * ( ( x/2 ) % mod) ) % mod) - (x % mod) + mod ) % mod;
    	}
    	ll ans = ( ( ( (x % mod) * (k-1) % mod ) % mod )  - (( ( (n-1) % mod ) *part ) % mod) + mod ) %mod;
    	cout<<( ans + mod ) % mod <<endl;

    }    
}
