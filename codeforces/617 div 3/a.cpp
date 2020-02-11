/*
* All my senses intensify
* Whenever you and I, we dive
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
    	for(ll i = 0 ; i < n ; i++)
    	{
    		ll x;
    		cin>>x;
    		(x % 2) ? o++ : e++;

    	}
    	if((o == 0) || (e == 0 && n % 2 == 0))
    	{
    		cout<<"NO\n";
    		continue;
    	}
    	cout<<"YES\n";
    }
}
