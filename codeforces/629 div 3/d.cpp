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
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n ;
    	cin>>n;
    	ll arr[n];
    	for(ll i = 0 ; i < n ; i++ )
    	{
    		cin>>arr[i];
    	}
    	ll brr[n];
    	brr[0] = 1;
    	if(arr[0] != arr[n - 1]) brr[n - 1] = 2;
    	else brr[n - 1] = 1;
    	ll l = 1 , r = n - 2;
    	while(l < r)
    	{
    		if(arr[l] != arr[l - 1])
    		{
    			brr[l] =  
    		}
    	}
    	cout<<*max_element(brr , brr + n)<<endl;
    	for(ll i = 0 ; i < n ; i++ )
    		cout<<brr[i]<<" ";
    	cout<<endl;

    }
}
