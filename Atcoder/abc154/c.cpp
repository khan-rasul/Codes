/*
* All my senses intensify
* Whenever you and I, we dive
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
#define endl "\n"
using namespace std;
int main()
{
    // fast();
    set<ll> foo;
    ll n;
    cin>>n;
    for(ll i = 0 ; i < n ; i++)
    {
    	ll x;
    	cin>>x;
    	foo.insert(x);
    }
    if(foo.size() < n)
    	cout<<"NO\n";
    else
    	cout<<"YES\n";
}
