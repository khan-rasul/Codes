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
    	ll n , m;
    	cin>>n>>m;
    	if(m == 0)
    	{
    		cout<<0<<endl;
    		continue;
    	}
    	ll k = n - 1;
    	ll ans = (k / 2 + 1) * (n - (k / 2)) + m - 1;
    	cerr<<ans<<" ";
    	m = min(m , k / 2);
    	ll temp = ( k/2) * (k / 2 - 1) / 2;
    	ll x = k/2 - m;
    	temp -= (x - 1) * x /2;
    	cerr<<temp<<" ";
    	ans += temp;
    	cout<<ans<<endl;

    }
}
