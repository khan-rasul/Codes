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
ll n , m , k;
vector<string> s;
ll memo[505][505][505];
ll calc()
{
	ll ans = 0;
	for(ll i = 0 ; i < n ; i++)
	{
		ll x = 0 , y = m - 1;
		for(; s[i][x] != '1' ; x++);
		for(; s[i][y] != '1' ; y--);
		if( y >= x) 
		ans+=( y - x + 1);
	}
	return ans ;
}
ll solve(ll i , ll j, ll t)
{
	if(j >= m) return solve( i + 1 , 0 , t);
	if(i >= n) return calc();
	if( t <= 0) return calc();
	if(memo[i][j][t] != -1) return memo[i][j][t];
	ll ans = mod;
	if(s[i][j] == '1')
	{
		s[i][j] = '0';
		ans = solve(i , j + 1 , t - 1);
		s[i][j] = '1';
		ans = min(ans ,  solve(i , j + 1 , t) );
	}
	else
		ans = solve(i , j + 1 , t);
	return memo[i][j][t] = ans;

}
int main()
{
    fast();
    cin>>n>>m>>k;
    s.resize(n);
    memset(memo , -1 , sizeof memo);
    for(ll i = 0 ; i < n ; i++ )
    	cin>>s[i];
    cout<<solve(0,0,k);
    
}
