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
    	ll n;
    	cin>>n;
    	ll o = 0 , e = 0;
    	ll arr[n];
    	for(ll i = 0 ; i < n ; i++ )
    	{
    		cin>>arr[i];
    		(arr[i] % 2 )? o++ : e++;
    	}
    	if(n == 1 && e == 0)
    	{
    		cout<<"-1\n";
    		continue;
    	}
    	if(e > 0)
    	{
    		cout<<"1\n";
    		ll i;
    		for(i = 0 ; arr[i] % 2  ; i++);
    		cout<<i + 1<<endl;
    	}
    	else
    	{
    		cout<<"2\n";
    		cout<<"1 2"<<endl;
    	}
    }
}
