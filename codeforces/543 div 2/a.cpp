/*-----lusar98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
using namespace std;
int main()
{
    //fast();
    ll n,m,k;
    cin>>n>>m>>k;
    ll arr[n][2];
    for(ll i=0;i<n;i++)
        cin>>arr[i][0];
    vector<ll> foo[n];
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        foo[x-1].pb(arr[i][0]);
        arr[i][1]=x-1;
    }
    ll ans=0;
    for(ll i=0;i<k;i++)
    {
        ll x;
        cin>>x;
        x--;
        if(*max_element(foo[arr[x][1]].begin(),foo[arr[x][1]].end())!=arr[x][0])
            ans++;
    }
    cout<<ans;
}
