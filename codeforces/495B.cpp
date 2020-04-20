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
    ll a , b;
    cin>>a>>b;
    a -= b;
    if(a == 0)
    {
    	cout<<"infinity";
    }
    else if( a < 0)
    {
    	cout<<"0";
    }
    else
    {
    	ll ans = 0;
    	for(ll i = 1 ; i * i <= a ; i++ )
    	{
    		if(a % i == 0)
    		{
    			if(i == a / i)
    			{
    				if( i > b) ans++;
    			}
    			else
    			{
    				if(i > b) ans++;
    				if(a / i > b) ans++;
    			}
    		}
    	}
    	cout<<ans<<endl;
    }
}
