/*
* I'm a Ghost
* Now you see me, now you don't
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
    ll n;
    cin>>n;
    ll arr[n];
    vector<ll> foo;
    for(ll i = 0 ; i < n ; i++ )
    {
    	cin>>arr[i];
    }
    ll ans = n;
    foo.pb(arr[0]);
	for(ll i = 1 ; i < n ; i++ )
	{
		while(!foo.empty() && foo.back() > arr[i])
		{
			foo.pop_back();
		}
		foo.pb(arr[i]);
	}
	cout<<foo.size()<<endl;
}
