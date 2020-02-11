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
    ll arr[n + 1][n + 1] , ans[n + 1];
    for(ll i = 0 ; i < n  ; i++)
    {
    	for(ll j = 0 ; j < n  ; j++)
    		cin>>arr[i][j];
    }
    ll x = __gcd(arr[0][1] , arr[0][2] ), y = arr[0][1] / x , z = arr[0][2] / x;
    ans[1] = sqrt( y * (arr[1][2] / z) );
    ans[0] = arr[0][1] / ans[1];
    for(ll i = 2; i < n ; i++)
    {
    	ans[i] = arr[1][i] / ans[1];
    }
    for(ll i = 0 ; i< n ; i++)
    	cout<<ans[i]<<" ";
}
