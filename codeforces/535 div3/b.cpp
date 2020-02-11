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
    ll arr[n];
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    ll x = arr[n-1];
    vector<ll> foo,bar;
    bar.pb(0);
    for(ll i=0;i<n;i++)
    {
    	if( (x % arr[i] !=0 ) || (x % arr[i] == 0 && bar.back() ==arr[i]) )
    	{
    		foo.pb(arr[i]);
    	}
    	else
    		bar.pb(arr[i]);
    }
    ll y = foo.back();
    cout<<x<<" "<<y<<endl;    
}
