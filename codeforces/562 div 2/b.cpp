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
    ll n,m;
    cin>>n>>m;
    vector<set<int>> adj(n+1);
    set<pair<int,int>> foo;
    for(ll i=0;i<m;i++)
    {
    	ll a,b;
    	cin>>a>>b;
    	foo.insert({min(a,b),max(a,b)});
    	adj[a].insert(b);
    	adj[b].insert(a);
    }
    m=foo.size();
    ll mi=0;
    for(ll i=1;i<=n;i++)
    {
    	if(adj[mi].size()<adj[i].size())
    		mi=i;
    }
    for(set<int>::iterator it=adj[mi].begin();it!=adj[mi].end();it++)
    {
    	adj[*it].erase(mi);
    	m--;
    }
    adj[mi].clear();
    mi=0;
    for(ll i=1;i<=n;i++)
    {
    	if(adj[mi].size()<adj[i].size())
    		mi=i;
    }
    for(set<int>::iterator it=adj[mi].begin();it!=adj[mi].end();it++)
    {
    	adj[*it].erase(mi);
    	m--;
    }
    if(m>0)
    {
    	cout<<"NO";
    }
    else
    	cout<<"YES";
}
