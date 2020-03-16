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
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll arr[n];
    	for(ll i = 0 ; i < n ; i++ )
    		cin>>arr[i];
    	ll brr[n];
    	for(ll i = 0 ; i < n ; i++ )
    		cin>>brr[i];
    	sort(arr, arr + n);
    	sort(brr , brr + n);
    	for(ll i = 0 ; i < n ; i++ )
    		cout<<arr[i]<<" ";
    	cout<<endl;
    	for(ll i = 0 ; i < n ; i++ )
    		cout<<brr[i]<<" ";
    	cout<<endl;
    }
}
