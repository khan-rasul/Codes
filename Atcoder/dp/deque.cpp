/*-----lusar98-----*/
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
deque<ll> arr;
ll n;
ll memo[3000+10][3000+10][2];
ll solve(ll i, ll j, ll p)
{
	if(i==j )
	{
		return ( p ? 0 : arr[i] );
	}
	if(memo[i][j][p]!=-1)
		return memo[i][j][p];
	ll ans;
	if(p == 0)
	{
		ans = max(solve(i,j-1,1) + arr[j] , solve( i +1 , j , 1 ) +arr[i] );	
	}
	else
	{
		ans = min(solve(i, j-1 , 0) , solve(i+1 , j ,0) );
	}
	return memo[i][j][p] =ans;
}
int main()
{
    //fast();
	cin>>n;
	memset(memo,-1,sizeof memo);
	ll sum=0;
	for(ll i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		sum+=x;
		arr.pb(x);
	}
	cout<<(2*solve(0,n-1,0) - sum)<<endl;
}
