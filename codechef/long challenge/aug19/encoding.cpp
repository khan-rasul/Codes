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

ll power(ll a, ll b, ll m)
{
	if(b==1)
		return a % m;
	ll temp = power(a,b/2,m);
	temp = ( temp * temp ) % m;
	if(b % 2)
		temp= (a * temp) % m;
	return temp;
} 
ll solve(string s , ll n)
{
	cout<<"solving for "<<s<<endl;
	vector<pair<ll,ll> > dp(11);
	ll ans =0;
	// for(ll i =0 ; i < 10 ; i++) cout<<dp[i].ff<<" "<<dp[i].ss<<endl;
	for(ll i = 0 ; i < n ; i++)
	{
		vector<pair<ll,ll> > temp(11);
		pair<ll,ll> sum = {0,0};
		for(ll j = 0 ; j < 10 ; j++)
		{
			// sum.ff += dp[j].ff;
			sum.ss += dp[j].ss;
		}
		for(ll j = 0 ; j < 10 ; j++)
		{
			temp[j].ss = sum.ss + (s[i] - '0' > j ? 1 : 0) - dp[j].ss;
			temp[j].ff = j*(temp[j].ss + (s[i] - '0' == j ? 1 : 0) ) * pow(10 , n-i-1) + dp[j];
			/*(dp[j].ff + ( (  ( temp[j].ss + (s[i] - '0' == j ? 1 : 0) ) % mod ) 
						* ( power(j , power(10 , n - i , mod -1 ) , mod ) ) ) % mod) %mod;*/
			ans+=temp[j].ff;
		}
		dp = temp;
		for(ll j = 0 ; j < 10 ; j++)
		{
			cout << dp[j].ff << " " << dp[j].ss << endl;
		}
		cout<<endl;
	}
	ll sum =0;
	for(ll i = 0 ; i < 10 ; i++)
		sum = (sum + dp[i].ff)%mod;
	return sum;

}
int main()
{
    fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll nl , nr;
    	string l,r;
    	cin>>nl>>l;
    	cin>>nr>>r;
    	//cout<<(solve(r,nr) - solve(l, nl) + mod) %mod<<endl;
    	cout<<solve(r,nr)<<endl;
    }
    
}
