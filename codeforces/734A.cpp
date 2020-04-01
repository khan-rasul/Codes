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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll c = 0;
    for(ll i = 0 ; i < n ; i++ )
    {
    	if(s[i] == 'A')
    		c++;
    }
    if(c > n - c)
    	cout<<"Anton";
    else if( c == n - c)
    	cout<<"Friendship";
    else
    	cout<<"Danik";
    cout<<endl;
    
}
