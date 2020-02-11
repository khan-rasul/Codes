/*-----rk_98-----*/
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
    ll n;
    cin>>n;
    ll p , q;
    set<ll> foo;
    cin>>p;
    for(ll i = 0 ; i  < p; i++)
    {
    	ll x;
    	cin>>x;
    	foo.insert(x);
    }
    cin>>q;
    for(ll i=0; i<q; i++) 
    {
    	ll x;
    	cin>>x;
    	foo.insert(x);
    }
    if(foo.size() != n)
    {
    	cout<<"Oh, my keyboard!"<<endl; 
    }
    else
    	cout<<"I become the guy."<<endl;
    
}
