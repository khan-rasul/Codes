/*
* You had no aura, I had no wings
* You had your troubles and I had my things
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
    string s;
    cin>>s;
    ll m;
    cin>>m;
    ll c = 0 , x = inf , y = -1;
    for(ll i = 0 ; i < 10 ; i++)
    	if(s[i] == '1')
    	{
    		c++;
    		x = min(i , x);
    		y = i;
    	}
    if(c < 2) return cout<<"NO\n" , 0;
    cout<<"YES\n"<<x + 1<<" ";
    for(ll i = 1 ; i < m ; i++ )
    	cout<<y + 1<<" ";
    
}
