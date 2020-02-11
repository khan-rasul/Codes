/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf 1ll<<60
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
ll solve(ll p ,vector<ll> foo)
{
	if(foo.empty() ) return inf;
	if(p < 0 ) return 0 ;
	vector<ll> a , b;
	for( ll i = 0 ; i < foo.size() ; i++ )
	{
		if(foo[i] & (1<<p))
			a.pb(foo[i]);
		else
			b.pb(foo[i]);
	}
	ll ans = min( solve(p - 1 , a) , solve(p - 1 , b) );
	if(a.empty() || b.empty() )
		return ans;
	else
		return ans + (1<<p);
}
int main()
{
    //fast();
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(ll i = 0 ; i < n ; i++)
	{
		cin>>arr[i];
	}
	cout<<solve(30 , arr)<<endl; 
}
