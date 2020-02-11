/*-----lusar98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
int main()
{
    //fast();
    ll n,x,y;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    ll ans=0;
    for(ll i=0;i<y;i++)
    {
    	if(s[n-i-1]=='1')
    		ans++;
    }
    if(s[n-y-1]=='0') ans++;
    for(ll i=y+1;i<x;i++)
    {
    	if(s[n-i-1]=='1')
    		ans++;
    }
    cout<<ans;
}
