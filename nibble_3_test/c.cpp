/*-----rk_98-----*/
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
bool compare(ll a , ll b)
{
	ll x = __builtin_popcountll(a);
	ll y = __builtin_popcountll(b);
	//if(x == y) return true;
	if(x < y) return true;
	return false;
}
int main()
{
    //fast();
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i = 0 ; i < n ; i++ )
    	cin>>arr[i];
    sort(arr , arr + n , compare);
    for(ll i = 0 ; i < n ; i++)
    	cout<<arr[i]<<" ";
    // cout<<endl;
}
