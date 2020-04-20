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
    ll n , m;
    cin>>n>>m;
    ll limit = (n + m) * 3;
    for(ll i = 2 ; i <= limit ; i++ )
    {
    	if(i / 2 >= n && i / 3 >= m && (i / 2 + i / 3 - i / 6) >= (n + m))
    	{
    		cout<<i<<endl;
    		return 0;
    	}
    }
}
