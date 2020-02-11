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
string s;
ll memo[1000000][2];
ll solve(ll i , ll t )
{
	if(i == s.length()) return 0;
	if(memo[i][t] != 0 ) return memo[i][t];
	ll ans = 0;
	for(ll j = 0 ; j < 10 ; j++ )
	{
		if(t && s[i] - '0' < j ) break;
		ans += j + solve(i+1 , t && j == s[i] - '0');
	}
	return memo[i][t] = ans;
}
int main()
{
    //fast();
    cin>>s;
    cout<<solve(0,1)<<endl;
}
