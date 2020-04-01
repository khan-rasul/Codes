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
    ll k;
    cin>>k;
    vector<ll> foo;
    ll c = k;
    while(k)
    {
    	foo.pb(k % 2);
    	k /= 2;
    }
    foo.pb(0);
    ll a = 0, b = 0 , i = 0;
    for(; i < foo.size() ; i++ )
    {
    	a += (1 << i );
    	if(foo[i] == 0)
    		b += (1 << i );
    }
    cout<<3<<" "<<3<<endl;
    cout<<a<<" "<<a<<" "<<b<<endl;
    cout<<a<<" "<<c<<" "<<a<<endl;
    cout<<b<<" "<<a<<" "<<c<<endl;

}
 