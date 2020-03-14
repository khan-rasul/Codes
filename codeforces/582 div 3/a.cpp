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
    ll arr[n];
    for(ll i = 0 ; i < n ; i++)
    	cin>>arr[i];
    ll cost = mod;
    for(ll i = 0 ; i< n ; i++)
    {
    	ll sum = 0;
    	for(ll j = 0 ; j< n ;  j++)
    	{
    		sum += (abs(arr[i] - arr[j] ) % 2 );
    	}
    	cost = min(cost , sum);
    }
    cout<<cost<<endl;
}
