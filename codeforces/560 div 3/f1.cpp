/*-----lusar98-----*/
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
vector<ll> arr;
vector<vector<ll> > foo(1005);
bool check( ll n)
{
	ll b=0;
	for(ll i=0;i<n;i++)
	{
		b++;

	}
}
int main()
{
    //fast();
    ll n,m;
    cin>>n>>m;
    for(ll i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		arr.pb(x);
	}
    for(ll i=0;i<m;i++)
    {
    	ll a,b;
    	cin>>a>>b;
    	foo[b].pb(a);
    }

}
