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
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll> > foo(n);
    for(ll i=0;i<n;i++)
        cin>>foo[i].ff>>foo[i].ss;
    sort(foo.rbegin(),foo.rend());
    ll ans=0,sum=0,m=mod;
    for(ll i=0;i<k;i++)
    {
        sum+=foo[i].ff;
        m=min(m,foo[i].ss);
        ans=max(ans,sum*m);
    }

    for(ll i=0;i<n;i++)
        swap(foo[i].ff,foo[i].ss);
    sort(foo.rbegin(),foo.rend());
    ll ans1=0;
    sum=0;m=mod;
    for(ll i=0;i<k;i++)
    {
        sum+=foo[i].ss;
        m=min(m,foo[i].ff);
        ans1=max(ans1,sum*m);
    }
    cout<<max(ans,ans1)<<endl;
}
