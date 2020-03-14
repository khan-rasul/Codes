/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
int main()
{
    //fast();
    ll n  , k , limit = 0;
    cin>>n >> k;
    map<ll,ll> foo;
    for(ll i = 0 ; i <n ; i++)
    {
    	ll x;
    	cin>>x;
    	limit = max(x , limit);
    	foo[x]++;
    }
    ll master = mod;
    ll temp = k;
    for(ll j = 1 ; j <= limit; j++)
    {
    	ll ans = 0;
        queue<pair<ll,ll> > data;
        data.push({j,0});
        while( !data.empty() && k)
        {
        	pair<ll,ll> u = data.front();
        	data.pop();
        	if(u.ff > limit) { ans = mod ; break;}
        	if(k >= foo[u.ff] )
        	{
        		ans += foo[u.ff] * u.ss;
        		k-= foo[u.ff]; 
        	}
        	else
        	{
        		ans += k* u.ss;
        		k = 0;
        	}
        	data.push({2 * u.ff , u.ss + 1});
        	data.push({2  * u.ff + 1 , u.ss + 1});
        }
        master = min(master , ans);
        k =temp;
    }
    cout<<master<<endl;
}
