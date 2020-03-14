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
    map<ll,ll> foo,temp;
    ll c = 0;
    for(ll i = 0 ; i< n ; i++)
	{
		cin>>arr[i];
		foo[arr[i]]++;
	}
	for( auto x : foo)
	{
		if(x.ss > 1) c++;
	}
	ll ans = mod;
	if(c == 0) ans = 0;
    for(ll i = 0 ; i< n ; i++)
    {
    	temp = foo;
    	ll k =c;
    	for(ll j = i ; j < n ; j++)
    	{
    		temp[arr[j]]--;
    		if(temp[ arr[j] ] == 1)
    			k--;
    		if(k == 0)
    		{
    			ans = min(ans , j - i + 1);
    			break;
    		}
    	}
    }
    cout<< ans<<endl;
}
