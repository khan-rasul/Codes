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
#define endl "\n"
using namespace std;
int main()
{
    // fast();
    ll n;
    cin>>n;
    ll arr[n] ;
    vector<pair<ll,ll>>  brr(n);
    for(ll i = 0 ; i < n ; i++ )
	{
		cin>>arr[i];
		brr[i] = {arr[i] - i , i};
	}
	sort(brr.begin() , brr.end());
	ll ans = 0 , x = brr[0].ff , cnt = 0;
	for(ll i = 0 ; i < n ; i++ )
	{
		if(brr[i].ff == x)
		{
			cnt += arr[brr[i].ss];
		}
		else
		{
			ans = max(ans , cnt);

			x = brr[i].ff;
			cnt = arr[brr[i].ss];
		}
		x = brr[i].ff;
	} 
	ans = max(ans , cnt);
	cout<<ans<<endl;   
}
