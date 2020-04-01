/*
* I'm a Ghost
* Now you see me, now you don't
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
int main()
{
    // fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll p[n + 1] , c [n + 1];
    	for(ll i = 0 ; i < n ; i++ )
    		cin>>p[i + 1];
    	for(ll i = 0 ; i < n ; i++ )
    		cin>>c[i + 1];
    	ll vis[n + 1] = {0} , v = 1;;
    	for(ll i = 1 ; i <= n ; i++ )
    	{
    		// cerr<<i<<" ";
    		if(vis[i] == 0)
    		{
    			ll k = i ;
    			while(vis[k] == 0 && k != p[k])
    			{
    				vis[k] = v;
    				k = p[k];
    			}
    			if(vis[k])
    			v++;
    		}
    	}
    	for(ll i = 0 ; i < n ; i++)
    		cerr<<vis[i + 1]<<" ";
    	cerr<<endl;
    }
}
