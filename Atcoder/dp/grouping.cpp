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
const ll nax = 18;
ll par[nax];
ll arr[nax][nax];
// ll parent(ll p)
// {
// 	return par[p] = (par[p] == p ? p : parent(par[p])) ;
// }
// void unionset(ll a, ll b)
// {
// 	if()
// }
ll n;
ll solve(ll p , ll mask)
{
	if(p > n)
		return 0;
	ll ans = 0;
	for(ll i = 0 ; i < p ; i++)
	{
		if(mask & ( 1 << i))
		{
			ans += arr[ i + 1 ][p];
		}
	}
	for(ll i = 1 ; i <= p ; i++ )
	{
		ans  = max( ans , arr[i][p] + solve(p+1));
	}
	return ans;
}
int main()
{
    //fast();
    cin>> n ; 
    for(ll i = 1 ; i<= n ; i++) 
    	par[i] = i;
    for(ll i = 1 ; i <= n ; i++)
    {
    	for(ll j = 1; j <= n ; j++)
    		cin>>arr[i][j];
    }
    cout<<solve(1 , 0)<<endl;
}
