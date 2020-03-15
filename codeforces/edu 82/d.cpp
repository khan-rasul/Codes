/*
* All my senses intensify
* Whenever you and I, we dive
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
    	ll n , m;
    	cin>>n>>m;
    	ll arr[100] = {0};
    	ll sum = 0;
    	for(ll i = 0 ; i < m ; i++)
    	{
    		ll x;
    		cin>>x;
    		sum += x;
    		ll c = 0;
    		while(x)
    		{
    			c++;
    			x /= 2;
    		}
    		// cout<<c - 1<<" ";
    		arr[c - 1]++;
    	}
    	if(sum < n) 
    	{
    		cout<<"-1\n";
    		continue;
    	}

    	ll dp[100] ;
    	for(ll i = 0 ; i < 100 ; i++) dp[i] = inf;
    	for(ll i = 35 ; i >= 0 ; i-- )
    	{
    		// cerr<<"jhi";
    		ll x = arr[i];
    		if(x == 0) continue;
    		dp[i] = 0;
    		ll c = 1 , cnt = 0;
    		while(c <= x) {c *= 2; cnt++;}
    		cnt--;
    		for(ll j = 1 ; j <= cnt ; j++)
    			dp[i + j] = 0;
    		ll k = i - 1, v = 1;
    		while( k > 0)
			{
				dp[k] = min(dp[k] , v);
				v++;k--;
			}


    	}
    	for(ll j = 0 ; j < 6 ; j++ )
    		cout<<dp[j]<<" ";
    	vector<ll> bin;
    	while(n)
    	{
    		bin.pb(n % 2);
    		n /= 2;
    	}
    	ll ans = 0;
    	for(ll i = 0 ; i < bin.size() ; i++)
    	{
    		if(bin[i] == 1)
    			ans += dp[i];
    	}
    	cout<<ans<<endl;

    }
}
