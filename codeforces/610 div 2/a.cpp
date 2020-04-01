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
    	ll a , b ,c , r;
	    cin>>a>>b>>c>>r;
	    if(a > b) swap(a , b);
	    if(c <= a )
	    {
	    	cout<< min(b - a , max(b - (c + r) , 0ll) );
	    }
	    else if(c >= b)
	    {
	    	cout<< min( b - a , max(c - r - a , 0ll));
	    }
	    else
	    {
	    	cout<<max(c - r - a , 0ll) + max(b - (c + r) , 0ll);
	    }
	    cout<<endl;
    }
}
