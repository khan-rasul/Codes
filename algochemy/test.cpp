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
ll visited[(ll)1e5+6]={0};
set<ll> adj[(ll)1e5+6];
ll arr[(ll)1e5+6];
void dfs(ll u)
{
    visited[u]=1;
    for( set<ll>::iterator it=adj[u].begin();it!=adj[u].end();it++)
    {
        if(visited[*it]==0)
        {
            adj[*it].erase(u);
            dfs(*it);
        }
    }
}
ll dfs1(ll u)
{
    ll ans=arr[u];
    for(set<ll>::iterator it=adj[u].begin();it!=adj[u].end();it++)
    {
        ans+=dfs1(*it);

    }
    return ans;
}
int main()
{
    //fast();
    ll n;
    cin>>n;

    for(ll i=0;i<n;i++)
        cin>>arr[i];

    for(ll i=1;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        a--;b--;
        adj[a].insert(b);
        adj[b].insert(a);
    }
    dfs(0);
    ll q;
    cin>>q;
    while(q--)
    {
        ll p;
        cin>>p;
        p--;
        cout<<dfs1(p)<<endl;
    }
}
