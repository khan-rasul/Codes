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
    ll n;
    cin>>n;
    ll a[n] , b[n] ;
    for(ll i = 0 ; i < n ; i++ )
    	cin>>a[i];
    for(ll i = 0 ; i < n ; i++ )
    	cin>>b[i];
    ll x = 0 , y = 0 , z = 0;
    for(ll i = 0 ; i < n ; i++ )
    {
    	if(a[i] == 1 && b[i] == 1) z++;
    	if(a[i] == 1) x++;
    	if(b[i] == 1) y++;
    }
    cerr<<x<<" "<<y<<" "<<z<<endl;
    x -=z ; y -= z;
    if(x == 0)
    {
    	cout<<"-1\n";
    	return 0;
    }
    if(x > y) return cout<<"1\n" , 0;
    if( y >= x) cout<<y / x + 1<<endl;
}
