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
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll> > temp[n];
    vector<ll> foo[n],bar[n];
    for(ll i=0;i<m;i++)
    {
        ll x,y;
        cin>>x>>y;
        x--;y--;
        if(y>x)
        temp[x].pb({y-x,y});
        else
            temp[x].pb({y-x+n,y});
    }
    for(ll i=0;i<n;i++)
        if(!temp[i].empty())
    sort(temp[i].begin(),temp[i].end());
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<temp[i].size();j++)
            foo[i].pb(temp[i][j].ss);
    }
    for(ll j=0;j<n;j++)
            bar[j]=foo[j];
    for(ll pop=0;pop<n;pop++)
    {
        ll ans=0,k=m;
        ll i=pop;
        map<ll,ll> train;
        for(ll j=0;j<n;j++)
        train.insert({j,0});
        while(m)
        {
            if(!foo[i].empty())
            {
                train[foo[i].back()]++;
                foo[i].pop_back();
            }
            if(train[i]!=0)
            {
                m-=train[i];
                train[i]=0;
            }
            if(m)
            {ans++;
            i=(i+1)%n;}
        }
        cout<<ans<<" ";
        m=k;
        for(ll j=0;j<n;j++)
            foo[j]=bar[j];
    }

}
