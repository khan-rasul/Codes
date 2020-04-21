/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
using namespace std;
ll msb(ll x)
{
    return 64-__builtin_clzll(x);
}
int main()
{
    //fast();
    //ll t;
    //cin>>t;
    ll n,t=0;
    while(cin>>n,n!=0)
    {
        if(t++)
            cout<<endl;
        deque<ll> foo;
        map<ll,ll> bar;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            foo.push_back(x);
            bar[x]++;
        }
        map<ll,ll>::iterator it;
        ll ma=0;
        for(it=bar.begin();it!=bar.end();it++)
            if(ma<it->second)
                ma=it->second;
        ll zeroes=0;
        for(it=bar.begin();it!=bar.end();it++)
            zeroes+=(ma-it->second);
        foo.resize(n+zeroes);
        sort(foo.begin(),foo.end());
        cout<<ma<<endl;
        for(ll i=0;i<ma;i++)
        {
            for(ll j=i;j<foo.size();j+=ma)
                {
                    if(foo[j]!=0)
                    {
                        cout<<foo[j];
                        if(j+ma<foo.size())
                        cout<<" ";
                    }
                }
            cout<<endl;
        }
    }
}
