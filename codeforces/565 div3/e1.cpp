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
    ll t;
    cin >> t;
    while( t-- )
    {
    	ll n,m;
    	cin >> n >> m ;
    	vector< ll > adj[ n+1 ];
    	for(ll i = 0 ; i < m ; i++ )
    	{
    		ll a,b;
    		cin >> a >> b ;
    		adj[ a ].pb( b );
    		adj[ b ].pb( a );
    	}
    	vector<ll> even, odd;
    	queue<ll> bfs;
    	bfs.push(1);
    	ll visited[n+1]={0};
    	visited[1]=1;
    	ll flag=1;
    	//cout<<"test case: "<<t<<" printing bfs\n";
    	while(!bfs.empty())
    	{
    		ll u=bfs.front();bfs.pop();
    		if(visited[u]%2==1) odd.pb(u);
    		else even.pb(u);
    		flag = visited[u];
    		//cout<<visited[u]<<" -- "<<u<<"\n";
    		for(ll i=0;i<adj[u].size();i++)
    		{
    			if(visited[ adj[u][i] ]==0)
    			{
    				bfs.push(adj[u][i]);
    				visited[adj[u][i]]=flag+1;
    			}
    		}
    	}
    	if(odd.size()<even.size())
    	{
    		cout<<odd.size()<<"\n";
    		for(ll i=0;i<odd.size();i++)
    			cout<<odd[i]<<" ";
    	}
    	else
    	{
    		cout<<even.size()<<"\n";
    		for(ll i=0;i<even.size();i++)
    			cout<<even[i]<<" ";
    	}
    	cout<<"\n";
    }
}
