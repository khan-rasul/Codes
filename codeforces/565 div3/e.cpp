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
    ll t;
    cin >> t;
    while( t-- )
    {
    	ll n,m;
    	cin >> n >> m ;
    	vector< ll > adj[ n+1 ];
    	ll deg[ n + 1 ] = { 0 };
    	for(ll i = 0 ; i < m ; i++ )
    	{
    		ll a,b;
    		cin >> a >> b ;
    		adj[ a ].pb( b );
    		adj[ b ].pb( a );
    		deg[ a ]++;
    		deg[ b ]++;
    	}

    	vector< ll > ans;
    	ll arr[ n + 1 ] = { 0 } ;
    	while( 1 )
	    {	
	    	ll ma = 0 , mi = 0 ;
	    	for(ll i = 1 ; i <= n ; i++ )
	    	{
	    		if( arr[ i ] == 0 )
	    		{
	    			if( deg[ i ] > ma )
	    			{
	    				ma = deg[ i ] ;
	    				mi = i ;
	    			}
	    		}
	    	}

	    	if( mi == 0 ) break;
	    	ans.pb( mi );
	    	arr[ mi ] = 1 ;
	    	for(ll i = 0 ; i < adj[ mi ].size() ; i++ )
	    	{
	    		arr[ adj[ mi ][ i ] ] = 1 ;
	    	}
	    }
	    cout << ans.size() << "\n" ;
	    for(ll i = 0 ; i < ans.size() ; i++ )
	    	cout << ans[i] <<" ";
	    cout << "\n" ;
    }
}
