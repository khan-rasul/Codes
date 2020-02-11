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
    	ll n , s , sum = 0;
    	cin>>n>>s;
    	vector<ll> foo(n);
    	for(ll i = 0 ; i < n ; i++)
		{
			cin>>foo[i]; sum+=foo[i];
		}
    	if(sum <= s)
    	{
    		cout<<"0\n";
    		continue;
    	}
    	ll pre[n] = {0};
    	pre[0] = foo[0];
    	for(ll i = 1 ; i < n ; i++)
    		pre[i] = pre[i - 1] + foo[i];
    	ll ans =  -inf, res =  -1 ;
    	for(ll i = 0 ; i < n ; i++ )
    	{
    		ll p = upper_bound(pre , pre + n , s + foo[i] ) - pre;
    		p--;
    		// if(p == i) p--;
    		// cout<<pre[i]<<" "<<p <<endl;
    		if(ans < p && p >= i)
    		{
    			ans = p;
    			res = i + 1;
    		}
    	}
    	cout<<res<<endl;
    }
}
