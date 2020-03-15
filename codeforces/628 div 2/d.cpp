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
vector<ll> foo ;
ll u , v;
int main()
{
    //fast();
    cin>>u>>v;
    foo.resize( 67);
    ll k = 0;
    ll t = u;
    while(u)
    {
    	foo[k++] = (u % 2);
    	u /= 2;
    }
    v -= t;
    if(v < 0 || v % 2)
    {
    	cout<<"-1";
    	return 0;
    }
    v /= 2;
    vector<ll> cnt(67);
    for(ll i = 60 ; i >= 0 ; i-- )
    {
    	ll temp = (v / (1ll<<i) ) * 2 ;
    	if(foo[i] == 1) temp++;
    	if(temp == 0) temp--;
    	cnt[i] = (temp); 
    	v %= (1ll<<i);
    }
    if(v != 0)
    {
    	cout<<"-1\n";
    	return 0;
    }
    vector< pair<ll,ll> > ans;
    ll m = inf;
    ll res = 0;
    ll chk = 100;
    while(chk > 0)
    {
    	ll temp = 0;
    	for(ll i = 60 ; i >= 0 ; i-- )
    		if(cnt[i] != -1) m = min(m , cnt[i]);
    	chk = 0;
    	for(ll i = 60; i >= 0 ; i-- )
    	{
    		if(cnt[i] == -1) continue;
    		temp += (1ll<<i);
    		cnt[i] -= m ;
    		if(cnt[i] == 0) cnt[i] = -1;
    		chk++;
    	}
    	if(temp == 0 )continue;
    	res += m;

    	ans.pb({m , temp});
    }   
    cout<<res<<"\n";
    for(ll i = 0 ; i < ans.size() ; i++)
    {
    	for(ll j = 0 ; j < ans[i].ff ; j++ )
    		cout<<ans[i].ss<<" ";
    } 
}
