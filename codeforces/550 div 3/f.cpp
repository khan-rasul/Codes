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
    vector<pair<ll,ll> > edge;
vector<vector<ll> > adj(n+1);
    for(ll i=0;i<m;i++)
    {
        ll x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
        edge.pb({x,y});
    }
    queue<pair<ll,ll> > data;
    ll visited[n+1]={0};
    data.push({1,0});
    visited[1]=1;
    ll flag=0;
    ll ver[n+1];
    memset(ver,-1,sizeof ver);
    while(!data.empty())
    {
        pair<ll,ll> u=data.front(); data.pop();
        ver[u.ff]=u.ss;
        for(ll i=0;i<adj[u.ff].size();i++)
        {
            if(visited[adj[u.ff][i]]==0)
            {data.push({adj[u.ff][i],1-u.ss}); visited[adj[u.ff][i]]=1;}
        }
    }
    ll ans[m];
    for(ll i=0;i<edge.size();i++)
    {
        if(ver[edge[i].ff]==0 && ver[edge[i].ss]==1)
            ans[i]=1;
        else if(ver[edge[i].ff]==1 && ver[edge[i].ss]==0)
            ans[i]=0;
        else
        {cout<<"NO\n"; return 0;}
    }
    cout<<"YES\n";
    for( ll i=0;i<m;i++)
        cout<<ans[i];
}
