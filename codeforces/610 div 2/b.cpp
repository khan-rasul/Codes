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
vector<ll> arr;
int main()
{
    // fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n , p , k;
    	cin>>n>>p>>k;
    	arr.resize(n);
    	for(ll i = 0 ; i < n ; i++)
    		cin>>arr[i];
    	sort(arr.begin() , arr.end());
    	ll sum = 0, ans = 0;
    	for(ll i = 0 ; i < k && sum <= p; i++ )
    	{
    		ll pref = sum, part = i;
    		for(ll j = i + k ; j - 1 < n ; j += k)
    		{
    			if(pref + arr[j - 1] <= p)
    			{
    				pref += arr[j - 1];
    				part += k;
    			}
    		}
    		sum += arr[i];
    		ans = max(ans , part);
    	}
    	cout<<ans<<endl;
    }
}
