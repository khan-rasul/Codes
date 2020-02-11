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
vector<vector<ll> > adj;
ll visited[1000000]={0};
ll arr[1000000];
ll b=0,r=0;
ll ans=0;
pair<ll,ll> dfs(ll u,ll x,ll y)
{
    visited[u]=1;
    if(arr[u]==1) {x++;}
    else if(arr[u]==2) {y++;}
    for(ll i=0;i<adj[u].size();i++)
    {
        if(visited[adj[u][i]]==0)
        {
            pair<ll,ll> ret=dfs(adj[u][i],0,0);
            x+=ret.ff;y+=ret.ss;
        }
    }
    if(!(r-x && b-y ) && !( x && y)) ans++;
    return {x,y};
}
int main()
{
    ll n;
    cin>>n;
    adj.resize(n);
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1) r++;
        else if(arr[i]==2) b++;
    }
    for(ll i=0;i<n-1;i++)
    {
        ll p,q;
        cin>>p>>q;
        p--;q--;
        adj[p].pb(q);
        adj[q].pb(p);
    }

    dfs(0,0,0);
    cout<<ans;
}
