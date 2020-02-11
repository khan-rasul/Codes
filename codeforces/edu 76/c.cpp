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
    	ll n;
    	cin>>n;
    	vector<pair<ll,ll>> foo(n) , bar;
    	for(ll i = 0 ; i < n ; i++ )
    	{
    		cin>>foo[i].ff;
    		foo[i].ss = i;
    	}
    	if(n == 1)
    	{
    		cout<<"-1\n";
    		continue;
    	}
    	sort(foo.begin() , foo.end());
    	pair<ll,ll> p = foo[0] , ans = {-inf , inf};
    	for(ll i = 1 ; i < n ; i++ )
    	{
    		if(foo[i].ff == p.ff)
			{
				bar.pb({p.ss , foo[i].ss});
			}
			// cout<<p.ss<<" "<<foo[i].ss<<" :: ";
			p = foo[i];
			// cout<<ans.ff<<" "<<ans.ss<<endl;

    	}
    	if(bar.empty())
    	{
    		cout<<"-1\n";
    		continue;
    	}
    	sort(bar.begin() , bar.end());
    	ans = bar[0];
    	ll res = ans.ss - ans.ff;
    	for(ll i = 1 ; i < bar.size() ; i++ )
    	{
    		if(bar[i].ff > ans.ff )
    		{
    			if(res > bar[i].ss - bar[i].ff)
    			{
    				ans = bar[i];
    			}
    		}
    		else
    			ans.ss = min(bar[i].ss , ans.ss);
    		res = ans.ss - ans.ff;
    	}
    	cout<<res + 1<<endl;
    }
}
