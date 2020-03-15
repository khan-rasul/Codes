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
    	string s;
    	cin>>s;
    	set<ll> adj[26];
    	ll vis[26] = {0};
    	if(s.length() == 1)
    	{
    		cout<<"YES\n";
    		for(ll i = 0 ; i < 26 ; i++)
    			if(vis[i] == 0)
    				cout<<(char)(i + 'a');
    		cout<<endl;
    		continue;
    	}
    	adj[s[0] - 'a'].insert(s[1] - 'a');
    	for(ll i = 1 ; i < s.length() - 1 ; i++ )
    	{
    		adj[s[i] - 'a'].insert(s[i - 1] - 'a');
    		adj[s[i] - 'a'].insert(s[i + 1] - 'a');
    	}
    	adj[s[s.length() - 1] - 'a'].insert(s[s.length() - 2] - 'a' );
    	ll p = -1 , cnt = 0;
    	for(ll i = 0 ; i < 26 ; i++ )
    		{
    			if(adj[i].size() == 1)
    				{p = i ; cnt++ ; }
    			if(adj[i].size() > 2)
    				{ p = -1 ; break;}
    		}
    	if(p == -1 || cnt < 2)
    	{
    		cout<<"NO\n";
    		continue;
    	}
    	vector<ll> ans;
    	ans.pb(p);
    	
    	vis[p] = 1;
    	while(1)
    	{
    		ll mark = p;
    		for(ll i : adj[p])
    		{
    			if(vis[i] == 0)
    			{
    				ans.pb(i);
    				vis[i] = 1;
    				p = i;

    				break;
    			}
    		}
    		if(p == mark) break;
    	}
    	cout<<"YES\n";
    	for(ll i = 0 ; i < ans.size() ; i++ )
    	{
    		cout<<(char)(ans[i] + 'a');
    	}
    	for(ll i = 0 ; i < 26 ; i++)
    		if(vis[i] == 0)
    			cout<<(char)(i + 'a');
    	cout<<endl;


    }
}
