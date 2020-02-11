/*
* Look in my eyes, what do you see?
* The cult of personality
*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf ((ll)1e18)
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std; 
vector<vector<string> > temp(26);
ll solve(ll i ,ll l , ll r, vector<string> foo)
{
	if(r - l < 2) return 0;

	ll cnt[26];
	for(ll j = 0 ; j < 26 ; j++ ) cnt[j] = temp[j].size();
	ll ans = 0;
	for(ll j = l ; j < r ; j++ )
	{
		cerr<<foo[j]<<" ";
		if(foo[j].length() > i)
		temp[foo[j][i] - 'a'].pb(foo[j]);
	}
	for(ll j = 0 ; j < 26 ; j++)
		for(ll k = j + 1 ; k < 26 ; k++ )
		{
			ans = (ans + (i * i % mod ) * 
				( (temp[j].size() - cnt[j]) * (temp[k].size() - cnt[k]) % mod ) % mod) % mod;
		}
	cerr<<"\n"<<ans<<" "<<l<<" "<<r<<endl;
	ll part = 0;
	for(ll j = 0 ; j < 26 ; j++)
		if( temp[j].size() - cnt[j] > 1 )
		part = (part + solve(i + 1 , cnt[j], temp[j].size(), temp[j]) ) % mod;
	return ans + part;
}
int main()
{
    // fast();
    ll n;
    cin>>n;
    vector< string > foo(n);
    for(ll i = 0 ; i < n ; i++)
    {
    	cin>>foo[i];
    } 
    cout<<solve(0 ,0 , n, foo)<<endl;
}
