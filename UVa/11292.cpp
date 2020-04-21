/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
using namespace std;
int main()
{
    //fast();
    //ll t;
    //cin>>t;
    ll n,m;
    while(cin>>n>>m,n!=0)
    {
        vector<ll> dr,kn;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            dr.push_back(x);
        }
        for(ll i=0;i<m;i++)
        {
            ll x;
            cin>>x;
            kn.push_back(x);
        }
        sort(kn.begin(),kn.end());
        sort(dr.begin(),dr.end());
        ll v=0,cost=0,i;
        for(i=0;i<n;i++)
        {
            while(v<m && kn[v]<dr[i])
            v++;
            if(v>=m)
                break;
            else
                cost+=kn[v];
            v++;
        }
        if(i==n)
            cout<<cost<<endl;
        else
            cout<<"Loowater is doomed!"<<endl;
    }
}
