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
    ll n , x,y;
    cin>>n>>x>>y;
    ll arr[n];
    for(ll i =0 ; i < n  ; i++)
    	cin>>arr[i];
    ll ans =0;
    for(ll i = 0; i < n ; i++)
    {
    	ll pos =0;
    	for(ll j = 1; j <=x && j<i ; j++)
   		{
   			if(arr[i+j] <= arr[i])
   				pos =1;
    	}
    	for(ll j = 1 ; j <= y && j<n; j++)
    	{
    		if(arr[i+j] <= arr[i])
   				pos =1;
    	}
    	// cout<<pos<<" ";
    	ans = i;
    	// cout<<i<<endl;
    	if(pos == 0) break;
    }
    cout<<ans+1<<endl;
    
}
