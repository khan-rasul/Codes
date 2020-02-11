/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
vector< vector<ll> > adj; 
vector<bool> vis;
ll dfs(ll u)
{
    vis[u] = 1;
    ll ans = 0;
    for(ll x: adj[u])
    {
        if( !vis[x] )
        {
            ans += dfs(x);
        }
    }
    return ans + 1;
}
int main()
{
    fast();
    srand( time(0) );
    char s[] = "in#.txt";
    char t[] = "out#.txt";
    for(ll i = 4 ; i < 5 ; i++)
    {
    	s[2] = (char) ( '0' + i);
        t[3] = (char) ( '0' + i);
    	freopen(s, "r" , stdin );
        freopen(t , "w" , stdout );

        // logic
        adj.clear();
        vis.clear();

    	ll n , m;
        cin>>n>>m;
        adj.resize(n+2);
        vis.resize(n+2 , 0);

        for(ll i = 0 ; i< m ; i++)
        {
            ll a,b;
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        ll ans = 0 , cnt =0;
        for(ll i = 1 ; i <= n ;i++)
        {
            if( !vis[i] )
            {
                ans+=(dfs(i) - 1);
                cnt++;
            }
        }

        cout<< ans + 2*(cnt - 1)<<endl;
        // logic end

    	fclose(stdout);
    }
}
