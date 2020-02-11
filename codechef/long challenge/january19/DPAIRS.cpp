/*-----lusar_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
using namespace std;
int main()
{
    //fast();
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll> > na,ma;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        na.push_back({x,i});
    }
    for(ll i=0;i<m;i++)
    {
        ll x;
        cin>>x;
        ma.push_back({x,i});
    }
    sort(na.begin(),na.end());
    sort(ma.begin(),ma.end());
    ll x=0,y=0,presum=0;
    for(ll i=0;i<min(n,m);i++)
    {
        cout<<na[i].second<<" "<<ma[i].second<<endl;
    }
    if(n>m)
    {
        for(ll i=0;i<m;i++)
            cout<<na[i+1].second<<" "<<ma[i].second<<endl;
        for(ll i=m+1;i<n;i++)
            cout<<na[i].second<<" "<<ma[m-1].second<<endl;
    }
    else if(n<m)
    {
        for(ll i=0;i<n;i++)
            cout<<na[i].second<<" "<<ma[i+1].second<<endl;
        for(ll i=n+1;i<m;i++)
            cout<<na[n-1].second<<" "<<ma[i].second<<endl;
    }
    else
    {
        for(ll i=0;i<n-1;i++)
            cout<<na[i].second<<" "<<ma[i+1].second<<endl;
    }
}
