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
    ll arr[n] , diff[n];
    for(ll i = 0 ; i< n ; i++)
    {
    	cin>>arr[i];
    	if(i)
    		diff[i] = abs(arr[i] - arr[i-1]) * ( i % 2? 1 : -1 );
    }
    ll ans = 0 , sum = 0 , neg = 0;
    for(ll i = 1 ; i< n ; i++)
    {
    	sum += diff[i];
    	neg -= diff[i];
    	ans = max(ans , sum );
    	ans = max(ans , neg);
    	if(sum < 0)
    		sum = 0;
    	if(neg < 0 )
    		neg = 0;
    }
    cout<<ans<<endl;

}
