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
    ll m;
    cin>>m;
    while(m--)
    {
    	ll n , t , a[2];
    	cin>>n>>t>>a[0]>>a[1];
    	vector<pair<ll,ll>> foo(n);
    	for(ll i = 0 ; i < n ; i++ )
		{
			cin>>foo[i].ss; 
			foo[i].ss = a[foo[i].ss] ; 
		}
    	for(ll i = 0 ; i < n ; i++)
    		cin>>foo[i].ff;
    	sort(foo.begin() , foo.end());
    	ll arr[n] , brr[n];
    	for(ll i = 0 ; i < n ; i++)
    	{
    		arr[i] = foo[i].ff;
    		brr[i] = foo[i].ss;
    		if(i)
    			brr[i] += brr[i - 1];
    		cerr<<arr[i]<<" "<<brr[i]<<endl;
    	}
    	ll ans = 0, i;
    	for(i = 0 ; i < n ; i++)
    	{
    		if(i == n - 1 && brr[i] <= t) ans = i;
    		else if(i < n - 1 && brr[i] < arr[i + 1])
    		{
    			ans = i;
    		}
    	}
    	// if(brr[i] <= t) ans = i;
    	cout<<ans<<endl;
    }
}
