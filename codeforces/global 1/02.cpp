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
    vector<ll> foo(n),bar;
    for(ll i=0;i<n;i++)
        cin>>foo[i];
    for(ll i=0;i<n-1;i++)
        bar.pb(foo[i+1]-foo[i]-1);
    sort(bar.rbegin(),bar.rend());
    ll ans=foo[n-1]-foo[0]+1;
    for(ll i=0;i<k-1;i++)
        ans-=bar[i];
    cout<<ans<<endl;
}
