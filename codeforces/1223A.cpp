/*
* I'm a Ghost
* Now you see me, now you don't
* 	    ~wrt CF obviously~
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
    	if(n < 4)
    		cout<<(4 - n) <<endl;
    	else if(n & 1)
    		cout<<1<<endl;
    	else
    		cout<<0<<endl;
    }
    
}
