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
	fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n[3];
    	cin>>n[0]>>n[1]>>n[2];
    	vector<vector<ll> > arr(3); 
    	for(ll i = 0 ; i < 3; i++ )
    	{
    		arr[i].resize(n[i] );
    		for(ll j = 0 ; j < n[i] ; j++)
    			cin>>arr[i][j];
    		sort(arr[i].begin() , arr[i].end());
    	}
    	ll ans = 3 * inf;
    	for(ll i = 0 ; i < 3 ; i++)
    	{
    		for(ll j = 0 ; j < arr[i].size() ; j++ )
    		{
    			ll xp = upper_bound(arr[(i + 1) % 3].begin() , arr[(i + 1) % 3].end() , arr[i][j]) - arr[(i + 1) % 3].begin();
    			ll yp = lower_bound(arr[(i + 2) % 3].begin() , arr[(i + 2) % 3].end() , arr[i][j]) - arr[(i + 2) % 3].begin();
    			if(xp - 1 >= 0 && yp != n[(i + 2) % 3 ] )
    			{
    				ll x = arr[(i + 1) % 3][xp - 1] , y = arr[(i + 2) % 3][yp] , z = arr[i][j];
    				ans = min(ans , (x - y) * (x - y) + (y - z) * (y - z) + (z - x) * (z - x) );
    			}
    			xp = lower_bound(arr[(i + 1) % 3].begin() , arr[(i + 1) % 3].end() , arr[i][j]) - arr[(i + 1) % 3].begin();
    			yp = upper_bound(arr[(i + 2) % 3].begin() , arr[(i + 2) % 3].end() , arr[i][j]) - arr[(i + 2) % 3].begin();
    			if(xp != n[(i + 1) % 3] && yp - 1 >= 0 )
    			{
    				ll x = arr[(i + 1) % 3][xp] , y = arr[(i + 2) % 3][yp - 1] , z = arr[i][j]; ; 
    				ans = min(ans , (x - y) * (x - y) + (y - z) * (y - z) + (z - x) * (z - x) );
				}    			
    		}
    	}
    	cout<<ans<<endl;
    }
}
