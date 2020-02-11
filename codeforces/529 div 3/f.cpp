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
int main()
{
    //fast();
    ll n , m; 
    cin>>n>>m;
    ll arr[n+1];
    arr[0] = 1ll<<60;
    for(ll i=1 ;i <= n ;i++)
    	cin>>arr[i];
    ll  mint = ( min_element(arr, arr + n+1) - arr );
    // cout<<mint<<endl;
    set<ll> data;
    data.insert(mint);
    ll cost=0;
    for(ll i=0;i<m;i++)
    {
    	ll x,y,w;
    	cin>>x>>y>>w;
    	if(x == mint || y == mint)
    	{
    		if(arr[x] + arr[y] > w) 
    		{
    			cost+=w;
    			cout<<(i+1)<<" "<<cost<<"\n";
    			data.insert(x+y -mint);
    		}
    	}
    	else
    	{
    		if(arr[x] + arr[y] + arr[mint] >  min(arr[x] , arr[y] ) + w)
    		{
    			cost+= w + min(arr[x] , arr[y] ) + arr[mint];    			
    			cout<<(i+1)<<" "<<cost<<"\n";
    			data.insert(x);
    			data.insert(y);
    		}
    	}
    }
    for(ll i =1 ; i<=n;i++)
    {
    	if(!data.count(i))
    	{
    		cost += arr[mint] + arr[i];
    	}
    }
    cout<<cost<<endl;
}
