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
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll arr[n];
    	for(ll i = 0 ; i < n ; i++ )
    		cin>>arr[i];
    	sort(arr , arr + n);
    	ll l = 0 , r = n - 1;
    	vector<ll> foo;
    	while(l < r)
    	{
    		foo.pb(arr[r--]);
    		foo.pb(arr[l++]);
    	}
    	if(l == r) foo.pb(arr[l]);
    	reverse(foo.begin() , foo.end());
    	for(ll x : foo)
    		cout<<x<<" ";
    	cout<<endl;
    }
}
