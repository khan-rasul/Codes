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
int main()
{
    fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,z;
    	cin >> n >> z;
    	vector< ll > arr(n);
    	// set<ll> foo;
    	// foo.insert(0);
    	for(ll i= 0 ; i < n ;i++)
		{
			cin>>arr[i];
			// foo.insert(arr[i]);
		}
    	sort(arr.rbegin() , arr.rend());
    	arr.pb( 0 );
    	ll dp[ n + 5 ][ z + 5 ] ;
    	// memset(dp, -1 , sizeof dp);
    	for(ll i =0 ; i  + z <= n; i++)
    	{
    		dp[i + 1][1] = ( i + 1 ) * arr[i];  
    	}
    	for(ll i = 2 ; i <= z ; i++)
    	{
    		// set<ll>::iterator it = lower_bound(foo.begin() , foo.end() , arr[i] );
    		// --it;
    		for(ll j =1 ; j + z - i < n  ; j++)
    		{
    			dp[j + 1][i] = 1ll<<60;
    			for( ll k = 1; k <j ; k++)
    			{
    				dp[j + 1][i] = min(dp[ j + 1][i] , dp[k][ i - 1] + )
    			}
    		}
    	}
    	// for(ll i =0 ; i<= n  ; i++)
    	// {
    	// 	for(ll j =0 ; j <= z ;j++)
    	// 		cout<<dp[i][j]<<" ";
    	// 	cout<<endl;
    	// }
    	// for(ll x: arr) cout<<x<<" ";
    	ll ans = 1ll<<60;
    	for(ll i = 0 ; i<= n ; i++)
    	{
    		if(dp[i][z]!=-1)
    			ans = min(ans, dp[i][z]);
    	}
    	cout<<ans<<endl;
    }
}
