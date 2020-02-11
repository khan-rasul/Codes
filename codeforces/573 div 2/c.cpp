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
    ll n , m ,k;
    cin>>n>> m >> k;
    ll arr[m+1]={0};
    for(ll i =1 ; i <= m ; i++)
    {
    	cin>>arr[i];
    }
    sort(arr,arr+m+1);
    ll ans =0;
    ll part = k;
    ll last =0;
    while(arr[m]> part )
    {
    	ll pos = upper_bound(arr,arr+m+1 , part) - arr;
if(pos - last -1 == 0) ans--;
    	part += pos - last -1;
    	last = pos -1;
    	ll inc = max( (ll)ceil( (double)(arr[pos] - part) /k ) , 0ll );
part+=(inc*k);
    	ans++;
    }
    cout<<ans + 1;
}