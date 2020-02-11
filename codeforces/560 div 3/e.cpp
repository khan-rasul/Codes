/*-----lusar98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 998244353 
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
    {
    	cin>>arr[i];
    	arr[i] = (n-i)*(i+1) * arr[i];
    }
    vector<ll> brr(n);
    for(ll i=0;i<n;i++)
    	cin>>brr[i];
    sort(brr.rbegin(),brr.rend());
    sort(arr,arr+n);
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
    	arr[i]%=mod;
    	ans+=(arr[i] * brr[i]) %mod;
    	ans%=mod;
    }
    cout<<ans<<endl;
}
