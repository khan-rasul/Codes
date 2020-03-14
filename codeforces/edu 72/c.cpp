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
ll dp[1000000];
ll solve(ll n , ll num, ll pow)
{
	if(n<0) return 0;
	// cout<<"itr no: "<<n<<" "<<num<<" " << pow<<endl;
	if(dp[n] != -1)
		return dp[n];
	ll ans = solve(n - 1 , num + pow* (s[n] - '0') , pow*2) + solve(n-1 , 0 , 1) ;
	if(num + pow* (s[n] - '0') == log2(pow) + 1) 
		ans++;
	// cout<<"itr no: "<<n<<" "<<num<<" " << pow<<" ";
	// cout<<ans<<endl;
	return dp[n] = ans;

}
int main()
{
    //fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	memset(dp , -1 , sizeof dp);
    	cin>>s;
    	cout<<solve(s.length() - 1 , 0 , 1)<<endl;
    }
}
