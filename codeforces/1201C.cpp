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
    ll n , k;
    cin>>n>>k;
    ll arr[n];
    for(ll i = 0 ; i < n ; i++)
    	cin>>arr[i];
    sort(arr , arr + n );
    ll diff[n];
    for(ll i = 0; i < n - 1 ; i++)
    {
    	diff[i] = arr[i+1] - arr[i];
    }
    ll v =1;
    for(ll i = n/2 ; i< n - 1; i++)
    {
    	if(v*diff[i] <= k)
    	{
    		k -= (v*diff[i]);
    		v++;
    	}
    	else
    	{
    		break;
    	}
    }
    cout<<(arr[n/2 + (v - 1)] + (k / v))<<endl;
}
