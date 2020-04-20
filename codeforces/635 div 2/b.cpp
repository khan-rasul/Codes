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
    	ll x , n , m;
    	cin>>x>>n>>m;
    	ll f = x;
    	ll cnt = 0;
    	while(n--)
    	{
    		if(f - 10 * m <= 0)
    		{
    			cnt = 1;
    			break;
    		}
    		f /= 2;
    		f += 10;
    	}
    	if(f - 10 * m <= 0)
    		{
    			cnt = 1;
    			
    		}
    	if(cnt)
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";
    }
}
