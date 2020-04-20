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
    ll n , m;
    cin>>n>>m;
    ll arr[m + 1] = {0};
    for(ll i = 0 ; i < m ; i++ )
    {
    	arr[i] = n / m;
    	if(i <= n % m )
    		arr[i]++;
    }
    arr[0]--;
    ll freq[m + 1] = {0};
    for(ll i = 0 ; i < m ; i++ )
    {
    	freq[i * i % m] += arr[i];
    }
    ll ans = 0;
    for(ll i = 0 ; i < m ; i++ )
    {
    	ans += freq[i] * freq[(m - i) % m];
    }
    cout<<ans<<endl;
}
