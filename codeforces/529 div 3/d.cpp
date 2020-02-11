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
    ll n;
    cin>>n;
    vector<pair<ll,ll> > foo(n+1);
    for(ll i=1 ;i <= n; i++)
    	cin>>foo[i].ff>>foo[i].ss;
    ll k=1;
	cout<<k<<" ";
	if(foo[ foo[k].ff ].ff == foo[k].ss || foo[ foo[k].ff ].ss == foo[k].ss)
	{
		cout<<foo[k].ff<<" "<<foo[k].ss<<" ";
		k = foo[k].ff;
	}
	else
	{
		cout<<foo[k].ss<<" "<<foo[k].ff<<" ";
		k = foo[k].ss;
	}
	n-=3;
	ll p = foo[1].ff + foo[1].ss - k;
	while(n--)
	{
		cout<< foo[k].ff + foo[k].ss - p<<" ";
		ll temp = p;
		p = foo[k].ff + foo[k].ss - p;
		k = temp;
	}
}
