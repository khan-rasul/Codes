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
int main()
{
    //fast();
    ll q , x;
    cin>>q>>x;
    ll ans = 0;
    set<ll> foo;
    map<ll,ll> data;
    while(q--)
    {
    	ll p;
    	cin>>p;
    	p %= x;
    	data[p]++;
    	p += (data[p] - 1) * x;
    	foo.insert(p);
    	while(foo.count(ans)) ans++;
    	cout<<ans<<endl;
    }
}
