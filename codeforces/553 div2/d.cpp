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
bool compare(pair<ll,ll> a,pair<ll,ll> b)
{
    if(a.ff>b.ff)
        return true;
    if(a.ff == b.ff && a.ss<b.ss)
        return true;
    return false;
}
int main()
{
    //fast();
    ll n;
    cin>>n;
    vector<pair<ll,ll> > foo(n);
    for(ll i=0;i<n;i++)
    {
        cin>>foo[i].ff>>foo[i].ss;
    }
    sort(foo.begin(),foo.end(),compare);
    for(ll i=0; i<n-1;i++)
    {
        ll a=foo[i].ff*i+foo[i].ss*(n-1-i);
        ll b= foo[i+1].ff*(i+1)+foo[i+1].ss*(n-1-i-1);
        ll c = foo[i].ff*(i+1)+foo[i].ss*(n-1-i-1);
        ll d = foo[i+1].ff*i+foo[i+1].ss*(n-1-i);
        if(a+b>c+d)
            swap(foo[i],foo[i+1]);
    }
    ll ans=0;
    cout<<endl;
    for(ll i=0;i<n;i++)
    {
        cout<<foo[i].ff<<" "<<foo[i].ss<<endl;
        ans+=foo[i].ff*i+foo[i].ss*(n-1-i);
    }
    cout<<ans;
}
