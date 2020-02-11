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
    ll n , I;
    cin>>n>>I ;
    map<ll,ll> foo;
    for(ll i =0 ; i< n ; i++)
    {
    	ll x; 
    	cin>>x;
    	foo[x]++;
    }
    ll dis =0;
    vector< pair<ll,ll> > data;
    for(auto x:foo)
    {
    	data.pb(x);
    	dis++;
    }
    sort(data.begin(),data.end());
   	if(log2(dis) <= (double)(8.0*I/n) )
   	{
   		cout<<0<<endl;
   	}
   	else
   	{
   		ll ans = 0;
   		for(ll i =0 ; i < data.size() ; i++)
   		{
   			if(log2(dis) <= (double)(8.0*I/n) )
		   	{
		   		cout<<ans<<endl;
		   		break;
		   	}
		   	ans+=data[i].ff;
		   	dis--;
   		}
   	}
   	
}
