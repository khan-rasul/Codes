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
//ll edge[(ll)1e5+5][3]
ll n,k;
ll power(ll a,ll p, ll m)
{
    if(p==1)
        return a%m;
    ll t=power(a, p/2 , m);
    t=(t*t)%m;
    if(p%2)
        t=(t*a)%m;
    return t;
}
ll vis[(ll)1e5+5]={0};
ll dfs(ll u)
{
    vis[u]=1;
    ll ans=1;
    for(ll i=0;i<adj[u].size();i++)
    {
        if(vis[adj[u][i]]==0)
        ans+=dfs(adj[u][i]);
    }
    return ans;
}
int main()
{
    //fast();
    cin>>n>>k;
    adj.resize(n);
    for(ll i=1;i<n;i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        a--;b--;
        if(c==1)
            continue;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        if(vis[i]==0)
            ans+=power(dfs(i),k,mod);
        ans%=mod;
    }
    cout<<(power(n,k,mod)-ans+mod)%mod<<endl;
}
