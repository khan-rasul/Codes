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
    	set<ll> adj[n + 1];
    	set<ll> foo;
    	ll chk[n + 1] = {0};
    	for(ll i = 0 ; i < n ; i++ )
    	{
    		foo.insert(i + 1);
    		ll k;
    		cin>>k;
    		while(k--)
    		{
    			ll x;
    			cin>>x;
    			adj[i + 1].insert(x);
    		}
    	}
    	ll ans = 0;
    	for(ll i = 1 ; i <= n ; i++ )
    	{
    		auto k = adj[i].begin();
    		while(k != adj[i].end() && !foo.count(*k) )
    		{
    		    k++;
    		}
    		if(k != adj[i].end())
    		{
    			chk[i] = *k;
    			foo.erase(*k);
    			ans++;
    		}
    		// cerr<<chk[i]<<" ";
    	}
    	if(ans == n)
    	{
    		cout<<"OPTIMAL\n";
    		// cerr<<ans<<endl;
    		continue;
    	}

    	ll flag = 0 , ind = -1;
    	for(ll i = 1 ; i <= n ; i++ )
    		if(chk[i] == 0) flag = i;
    	if(!foo.empty()) ind = *foo.begin();
    	
    	if(flag == 0 || ind == -1)
    	{
    		cout<<"OPTIMAL\n";
    		// cerr<<ans<<endl;
    		continue;
    	}
    	else
    	{
    		cout<<"IMPROVE\n";
    		cout<<flag<<" "<<ind<<endl;
    	}
    }
}
