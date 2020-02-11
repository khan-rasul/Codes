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
    	string s , t, z = "";
    	cin>>s>>t;
    	vector<ll> adj[26];
    	for(ll i = 0 ; i < s.length() ; i++ )
    	{
    		adj[s[i] - 'a'].pb(i);
    	}
    	ll k = 0;
    	ll ans = 0;
    	ll flag = 1;
    	while(z.length() < t.length())
    	{
    		ll i , v = -1;
    		ll len = z.length();
    		for(i = k ; i < t.length() && v < s.length() ; i++)
    		{
    			ll p = lower_bound( adj[t[i] - 'a'].begin() , adj[t[i] - 'a'].end() , v + 1) - adj[t[i] - 'a'].begin();
    			if(p < adj[t[i] - 'a'].size() ) 
    				z += t[i] , v = adj[t[i] - 'a'][p];
    			else break;
    		}
    		ans++;
    		k = i;
    		if(len == z.length())
    		{
    			flag = 0;
    			break;
    		}
    	}
    	cout<<(flag ? ans : -1) <<endl;
    }
}
