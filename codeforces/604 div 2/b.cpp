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
int main()
{
    //fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll arr[n + 1];
    	vector<pair<ll,ll>> foo(n + 1);
    	for(ll i = 1 ; i <= n ; i++)
    	{
    		cin>>arr[i];
    		foo[i] = { arr[i] , i };
    	}
    	sort(foo.begin() , foo.end());
    	ll num = 1;
    	ll l = foo[1].ss , r = foo[1].ss;
    	ll ans[n+1] = {0};
    	ans[1] = 1;
    	for(ll i = 2; i<=n ; i++)
    	{
    		ll x = foo[i].ss;
    		while(x < l)
    		{
    			l--;
    			num = max(num , arr[l]);
    		}
    		while( x > r)
    		{
    			
    			r++;
    			num = max(num , arr[r]);
    		}
    		if( r - l + 1 == i && num == i)
    			ans[i] = 1;
    	}
    	for(ll i = 1 ; i <= n ; i++)
    	{
    		cout<<ans[i];
    	}
    	cout<<endl;
    }
}
