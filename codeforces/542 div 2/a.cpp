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
    ll n;
    cin>>n;
    vector<pair<ll,ll> > foo(2*n);
    ll c=0;
    for(ll i=0;i<2*n;i++)
    {
        cin>>foo[i].ff;
        foo[i].ss=i+1;
    }
    sort(foo.begin(),foo.end());
    ll a=1;
    ll ans=0;
    for(ll i=0;i<2*n;i+=2)
    {
        ans+=abs(foo[i].ss-a);
        a=foo[i].ss;
    }
    a=1;
    for(ll i=1;i<2*n;i+=2)
    {
        ans+=abs(foo[i].ss-a);
        a=foo[i].ss;
    }
    cout<<ans<<endl;
}
