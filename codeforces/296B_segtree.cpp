/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf (1ll<<60)
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
ll base = 1;
vector<ll> st;
void update(ll p , ll x)
{
	for(st[ p += base ] = x ; p > 1 ; p /= 2)
		st[p >> 1] = max(st[p] , st[p ^ 1]);
}
ll query(ll l , ll r)
{
	ll res = 0;
	for(l += base , r += base ; l < r ; l /= 2 , r /= 2)
	{
		if(l & 1) res = max(res , st[l++]);
		if(r & 1) res = max(res , st[--r]);
	}
	return res;
}
int main()
{
    //fast();
    ll n, m;
    cin>>n>>m;
    ll arr[n];
    for(ll i = 0 ; i < n ; i++ )
    {
    	cin>>arr[i];
    	double x; 
    	cin>>x;
    }
    while(base <= m) base *= 2;
    st.resize(base * 2 , 0);
    ll dp[n + 1] ;
    dp[0] = 1;
    update(arr[0] , 1);
    ll ans = 1;
    for(ll i = 1 ; i < n ; i++ )
    {
    	ll best = 1;
    	best = max(best , 1 + query(0 , arr[i] + 1));
    	dp[i] = best;
    	ans = max(ans , dp[i]);
    	update(arr[i] , best);
    }
    cout<<n - ans<<endl;
}
