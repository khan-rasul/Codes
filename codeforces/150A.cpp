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
    ll q;
    cin>>q;
    ll c = 2;
    ll z = 1;
    ll n = q;
    for(ll i = 2 ; i * i <= q && c; i++ )
    {
    	while(c && q % i == 0)
    	{
    		z *= i;
    		q /= i;
    		c--;
    	}
    }
    if(c) {z *= q; c--;};
    if(c == 0 && (z == 1 || z == n) )
    {
    	cout<<2<<endl;
    }
    else
    {
    	cout<<1<<endl<<(c ? 0 : z)<<endl;
    }
}
