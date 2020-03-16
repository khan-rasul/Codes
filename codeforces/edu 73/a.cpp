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
    cin>>q;
    while(q--)
    {
    	ll n;
    	cin >> n;
    	map< ll , ll > foo;
    	for(ll i = 0 ; i < n ; i++ )
    	{
    		ll x;
    		cin >> x;
    		foo[ x ]++;
    	}
    	for(ll i = 1 ; i < 2048 ; i *= 2)
    		foo[ 2 * i ] += ( foo[ i ] / 2);
    	if(foo[2048] > 0)
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";

    }
}
