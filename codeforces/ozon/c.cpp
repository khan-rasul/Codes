/*
* Fingers Crossed
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
    if(n > m )
    {
        cout<<"0\n";
        return 0;
    }
    ll arr[n];
    for(ll i = 0 ; i < n ; i++ )
    {
        cin>>arr[i];
    }
    ll ans = 1;
    for(ll i = 0 ; i < n ; i++ )
    {
        for(ll j = i + 1 ; j < n ; j++ )
        {
            ans = (ans * abs(arr[i] - arr[j])) % m;
        }
    }
    cout<<ans<<endl;
}
