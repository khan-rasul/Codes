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
    	ll a = 0 , b = 0;
    	ll flag = 1;
    	for(ll i = 0 ; i < n ; i++ )
    	{
    		ll p , c;
    		cin>>p>>c;
    		if(p < c || p < a || c < b || (p - a) < (c - b)) flag = 0;
    		a = max(a , p);
    		b = max(b , c);
    	}
    	cout<<(flag ? "YES" : "NO")<<endl;
    }
}
