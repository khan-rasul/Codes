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
    ll n;
    cin>>n;
    ll brr[n] , arr[n];
    for(ll i = 0 ; i < n ; i++ )
    cin>>brr[i];
	arr[0] = brr[0];
	ll m = brr[0];
    for(ll i = 1 ; i < n ; i++ )  
    {
    	m = max(m , arr[i - 1]);
    	arr[i] = brr[i] + m;
    }  
    for(ll i = 0 ; i < n ; i++ )
    	cout<<arr[i]<<" ";
}
