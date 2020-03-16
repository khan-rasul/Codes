/*
* Fingers Crossed
*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf ((ll)1e18)
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
// #define endl "\n"
using namespace std;
int main()
{
    // fast();
	mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());	
	ll n;
	cin>>n;
	for(ll i = 1 ; i < n ; i++)
	{
		ll x , y;
		cin>>x>>y;
	}
	ll k = n / 2;
	vector<ll> foo;
	for(ll i = 0 ; i <= n ; i++)
		foo.pb(i);
	ll root = (rng() % n) + 1;
	swap(foo[root] , foo[n - 1]);
	root = foo[n - 1];
	foo.pop_back(); n--;

	while(k--)
	{
		ll ra = (rng() % n) + 1;
		swap(foo[ra] , foo[n - 1]);
		cout<<"? "<<root<<" "<<foo[n - 1]<<endl;
		cin>>root;
		foo.pop_back();
		n--;
	}
	cout<<"! "<<root<<endl;
}
