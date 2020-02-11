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
    if(a.ff<b.ff)
        return true;
    else if(a.ff==b.ff && a.ss>b.ss)
        return true;
    return false;
}
int main()
{
    //fast();
    ll n,q;
    cin>>n>>q;
    vector<pair<ll,ll> > foo(q);
    ll arr[n+5]={0};
    for(ll i=0;i<q;i++)
    {
        cin>>foo[i].ff>>foo[i].ss;
        arr[foo[i].ff]++;
        arr[foo[i].ss+1]--;
    }
    sort(foo.begin(),foo.end(),compare);
    ll ans=0;
    //vector<ll> data(4);
    for(ll i=1;i<=n;i++)
        {
            arr[i]+=arr[i-1];
            //cout<<arr[i]<<" ";

        }
    for(ll i=0;i<q-1;i++)
    {
        ll p[n+5]={0};
        p[foo[i].ff]--;
        p[foo[i].ss+1]++;
        p[foo[i+1].ff]--;
        p[foo[i+1].ss+1]++;
        ll sum=0;

        for(ll i=1;i<=n;i++)
        {
            p[i]+=p[i-1];
            if(p[i]+arr[i]) sum++;
        }
        ans=max(ans,sum);
    }
    cout<<ans;
}
