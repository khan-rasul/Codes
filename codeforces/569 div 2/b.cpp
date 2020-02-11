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
    ll n;
    cin>>n;
    vector<pair<ll,ll> > arr;
    ll crr[n];
    ll diff=0,prod=1;
    for(ll i=0;i<n;i++)
    {
    	ll x;
    	cin>>x;
    	arr.pb({x,i});
    	if(x<0)
    		diff++;
    	prod*=x;
    	crr[i]=x;
    }
    for(ll i=0;i<n;i++)
    {
    	if(arr[i].ff>=0)
    		{
    			arr[i].ff=-(arr[i].ff+1);
    			diff++;
    		}
    }
    sort(arr.begin(),arr.end());
    ll foo[n];
    if(n%2==0)
    {
    	for(ll i=0;i<n;i++)
    		foo[arr[i].ss]=arr[i].ff;
    }
    else
    {
    	for(ll i=1;i<n;i++)
    		{
    			foo[arr[i].ss]=arr[i].ff;
    		}
    	foo[arr[0].ss]=-(arr[0].ff+1);
    }
    for(ll i=0;i<n;i++) cout<<foo[i]<<" ";

}