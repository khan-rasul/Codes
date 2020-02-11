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
int main()
{
    //fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n , m;
    	cin>>n;
    	ll arr[n];
    	for(ll i = 0 ; i < n; i++)
    		cin>>arr[i];
    	//sort(arr,arr + n);
    	cin>>m;
    	vector<pair<ll,ll>> foo(m);
    	ll chk = 0;
    	for(ll i = 0 ; i < m ; i++)
    	{
    		cin>>foo[i].ss>>foo[i].ff;
    		chk = max(chk , foo[i].ss);
    	}
    	if(chk < *max_element(arr, arr + n))
    	{
    		cout<<"-1\n";
    		continue;
    	}
    	ll dp[n + 2] = {0};
    	for(ll i = 0 ; i < m ; i++ )
    	{
    		dp[foo[i].ff] = max(dp[foo[i].ff] , foo[i].ss);
    	}
    	for(ll i = n ; i > 0 ; i--)
    		dp[i] = max(dp[i] , dp[i + 1]);
    	ll ans = 0, cnt = 0;
    	while(cnt < n)
    	{
    		ans++;
    		ll num = arr[cnt], pos = cnt;
    		while(num <= dp[pos - cnt + 1])
    		{
    			pos++;
    			if(pos >= n) break;
    			num = max(num, arr[pos]);
    		}
    		cnt = pos;
    	}
    	cout<<ans<<endl;
    }   
}
