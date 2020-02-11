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
ll n;
ll arr[22][22];
ll memo[22][1<<22];
ll dfs( ll u, ll mask)
{
	if(u == n +1)
	{
		if (__builtin_popcount(mask) == n )
				return 1;
		else
			return 0;
	}
	if(memo[u][mask] !=-1) return memo[u][mask];
	ll ans=0;
	for( ll i=1 ; i<=n ; i++  )
	{
		if(arr[u][i] == 1 && ((1<<(i-1))&mask) == 0 )
			ans+=dfs(u+1 , mask | (1<<(i-1)) );
		ans%=mod;
	}
	return memo[u][mask] = ans;
}
int main()
{
    //fast();
    memset(memo, -1,sizeof memo);
    cin>>n;
    for(ll i=1 ;i <=n ; i++)
    	for(ll j=1 ; j<= n ;j++)
    		cin>>arr[i][j];
    cout<<dfs(1,0)<<endl;
}
