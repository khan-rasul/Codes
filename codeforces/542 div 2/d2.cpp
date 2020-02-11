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
    if(a.ff == b.ff && a.ss<=b.ss)
        return true;
    return false;
}
int main()
{
    //fast();
    ll N,M;
    cin>>N>>M;
    const ll n=N,m=M;
    vector<pair<ll,ll> > temp;
    vector<ll> foo[n+5];
    for(ll i=0;i<m;i++)
    {
        ll x,y;
        cin>>x>>y;
        x--;y--;
        if(y>x)
        temp.pb({x,y-x});
        else
        temp.pb({x,y-x+n});
    }
    sort(temp.begin(),temp.end(),compare);
    for(ll i=0;i<(ll)temp.size();i++)
    {
        foo[temp[i].ff].pb(temp[i].ss);
    }
    for(ll pop=0;pop<n;pop++)
    {
        ll ans=0;
        ll k=n;
        ll i=pop;
        while(k--)
        {
            if(!foo[i].empty())
                ans=max(ans,n*( ( ll )foo[i].size() - 1 ) + foo[i][0]+n-k-1);
            i=(i+1)%n;
        }
        cout<<ans<<" ";
    }
    return 0;
}
