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
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n ;
    	cin>>n;
    	ll arr[n];
    	for(ll i = 0; i < n ;i++)
    		cin>>arr[i];
    	ll m = mod;
    	ll ans = 0 ;
    	for(ll i = n - 1 ; i>=0 ; i--)
    	{
    		if(arr[i] > m) ans++;
    		m =min(m ,arr[i]);
    	}
    	cout<<ans<<endl;
    }
}
