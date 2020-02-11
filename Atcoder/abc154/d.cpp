/*
* All my senses intensify
* Whenever you and I, we dive
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
    double arr[1005] = {0};
    for(ll i = 1 ; i <= 1000 ; i++)
    {
    	arr[i] = i * ( i + 1) / 2;
    	arr[i] = arr[i] / i;
    }
    ll n , k;
    cin>>n>>k;
    double foo[n];
    for(ll i = 0 ; i < n ; i++ )
    {
    	ll x;
    	cin>>x;
    	foo[i] = arr[x];
    	// cout<<foo[i]<<" ";
    }
    double ans = 0 , sum = 0;
    for(ll i = 0 ; i < k ; i++ )
    	sum+=foo[i];
    ans = sum;
    for(ll i = k ; i < n ; i++ )
    {
    	sum -= foo[i - k];
    	sum += foo[i];
    	ans = max(ans , sum);
    }
    cout.precision(12); cout<<fixed; 
    cout<<ans<<endl;
}
