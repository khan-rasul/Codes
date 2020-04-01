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
    	ll a , b , c , d;
    	cin>>a>>b>>c>>d;
    	ll x , y, x1 , x2 , y1 , y2;
    	cin>>x>>y>>x1>>y1>>x2>>y2;
    	a = -a;
    	c = -c;
    	b += a;
    	d += c;
    	if(b == 0 && a != 0) if(x1<= x + 1 && x + 1 <=x2) b = 1; else b = -1;
    	if(d == 0 && c != 0) if(y1 <= y + 1 && y + 1 <= y2) d = 1; else d = -1;
    	
    	if(x1<= x + b && x + b <=x2 && y1 <= y + d && y + d <= y2)
    		{ cout<<"YES\n"; continue; }
    	else
    		cout<<"NO\n";
    }
}
