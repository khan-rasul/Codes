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
    ll primes[11] = {2 , 3 , 5 , 7 , 11 , 13 , 17 , 19 ,23 ,29 , 31};
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n ;
    	cin>>n;
    	ll arr[n];
    	set<ll> foo;
    	for(ll i = 0 ; i < n ; i++ )
    	{
    		cin>>arr[i];
    		for(ll j = 0 ; j < 11 ; j++)
    			if(arr[i] % primes[j] == 0)
    			{
    				arr[i] = j + 1;
    				foo.insert(j + 1);
    				break;
    			}
    	}
    	map<ll,ll> bar;
    	cout<<foo.size()<<endl;
    	ll v = 1;
    	for(ll x : foo)
    	{
    		bar[x] =  v++;
    	}
    	for(ll i = 0 ; i < n ; i++)
    		cout<<bar[arr[i]]<<" ";
    	cout<<endl;

    }
}
