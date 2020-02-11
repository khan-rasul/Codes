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
    ll n , k;
    cin>>n>>k;
    priority_queue<ll> foo;
    for(ll i =0 ; i <=32 ; i++)
    {
    	if(n & (1ll<<i) )
    		foo.push(1ll<<i);
    }
    while(foo.size()<k)
    {
    	ll x = foo.top(); foo.pop();
    	if(x==1) break;
    	foo.push(x/2);
    	foo.push(x/2);
    }
    if(foo.size()!=k)
    {
    	cout<<"NO";
    }
    else
    {
    	cout<<"YES\n";
    	while(!foo.empty())
    	{
    		cout<<foo.top()<<" ";
    		foo.pop();
    	}
    }
}
