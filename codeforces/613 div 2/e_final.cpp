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
vector<ll> st;
ll base = 1;
void update(ll p , ll v)
{
	p += base;
	st[p] = v;
	for(; p > 1; p /= 2)
	{
		st[p >> 1] = min(st[p] , st[p ^ 1]);
	}
}
ll query(ll l , ll r)
{
	if( l >= r) return 0;
	ll res = inf;
	l += base; r += base;
	for(; l < r ; l /= 2 , r /= 2)
	{
		if(l & 1) res = min(res , st[l++]);
		if(r & 1) res = min(res , st[--r]);
	}
	return res;
}
int main()
{
    //fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	st.clear();
    	ll n;
    	cin>>n;
    	vector<pair<ll,ll>> foo(n);
    	for(ll i = 0 ; i < n ; i++ )
			cin>>foo[i].ff>>foo[i].ss;
    	sort(foo.begin() , foo.end());
    	ll pref[n + 1] = {0}, suff[n + 1] = {0};
    	pref[0] = 1;
    	pair<ll,ll> temp = foo[0];
    	for(ll i = 1 ; i < n ; i++ )
    	{
    		if(foo[i].ff <= temp.ss)
    		{
    			pref[i] = pref[i - 1];
    			temp.ss = max(temp.ss , foo[i].ss );
    		}
    		else
    		{
    			pref[i] = 1 + pref[i - 1];
    			temp = foo[i];
    		}
    	}
    	while(base < n) base *= 2;
    	st.resize(2 * base , inf);

    	deque<ll> l;
    	suff[n - 1] = 1;
    	update(n - 1 , 1);
    	l.push_front(foo[n - 1].ff);
    	for(ll i = n - 2 ; i >= 0 ; i-- )
    	{
    		ll p = upper_bound(l.begin() , l.end() , foo[i].ss) - l.begin();
    		if(p == 0)
    			suff[i] = 1 + suff[i + 1];
    		else
    		suff[i] = query(i + 1 , i + p + 1);
    		update(i , suff[i]);
    		l.push_front(foo[i].ff);
    	}
    	ll ans = max(pref[n - 2] , suff[1]);
    	ll rmax = foo[0].ss;
    	for(ll i = 1 ; i + 1 < n ; i++ )
    	{
    		ll p = upper_bound(l.begin() , l.end() , rmax) - l.begin();
    		if(p > i + 1)
    		ans = max( ans , pref[i - 1] + query(i + 1 , p) - 1);
    		else
    		ans = max(ans , pref[i - 1] + suff[i + 1]);
    		rmax = max(foo[i].ss , rmax);
    	}
    	cout<<ans<<endl;
    }
}
