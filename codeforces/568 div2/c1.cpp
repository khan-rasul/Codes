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
ll n,m,arr[105];
ll memo[105][105];
ll solve(ll i,ll t, ll v)
{
	if(v>m || i>=n)
	{
		return 0;
	}
	if(memo[i][v]!=-1)
		return memo[i][v];
	return memo[i][v] = max(solve(i+1,t,v),solve(i+1,t,v+arr[i]) +1);
}
int main()
{
    //fast();
    memset(memo,-1,sizeof memo);
    cin>>n>>m;
    for(ll i=0;i<n;i++)
    	cin>>arr[i];
    solve(0,0,0);
    for(ll i=0;i<n;i++)
    {
    	for(ll j=0;j<m;j++)
    	{
    		cout<<memo[i][j]<<" ";
    	}
    	cout<<endl;
    }
    
}
