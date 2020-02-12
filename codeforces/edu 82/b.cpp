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
    	ll n , g, b;
    	cin>>n>>g>>b;
    	ll temp = n;
    	n = ceil( n / 2.0);
    	ll x = n / g , y = n % g;
    	temp = temp - n;
    	ll ans = 0;
    	if(y == 0)
    	{
    		ans = x * (g + b) - b;
    		ans = max(ans , 0ll);
    		temp -= (x*b - b) ; 
    		temp = max(temp , 0ll);
    	}
    	else
    	{
    		ans = x * (g + b) + y;
    		temp -= x * b;
    		temp = max(temp , 0ll);
    	}
    	cout<<ans + temp <<endl;
    }
    
}
