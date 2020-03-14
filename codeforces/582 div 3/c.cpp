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
    ll q;
    cin>> q;
    while(q--)
    {
    	ll n , m ;
    	cin>>n>>m;
    	vector<ll> foo;
    	foo.pb(m % 10);
    	ll sum = 0;
    	for(ll i = 2; i <= 10 && ( m * i ) % 10 != foo[0] ; i++)
    		foo.pb((m * i) % 10 );
    	for(ll i = 0 ; i<foo.size(); i++)
    		sum+=foo[i];
    	ll x = n / m;
    	ll y = x / (ll)foo.size();
    	ll ans = y * sum;
    	y = x % (ll)foo.size();
    	for(ll i = 0 ; i< y ; i++)
    		ans+=foo[i];
    	cout<<ans<<endl;
    }
}
