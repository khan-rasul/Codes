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
    ll T;
    scanf("%lld\n",&T);
    while(T--)
    {
        ll n;
        deque<ll> foo,bar;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            foo.push_back(x);
        }
        sort(foo.begin(),foo.end());
        ll sum=0;
        while(!foo.empty())
        {
            if(!foo.empty())
                bar.push_back(foo.front());
            foo.pop_front();
            if(!foo.empty())
                bar.push_back(foo.front());
            foo.pop_front();
            if(!foo.empty())
                bar.push_back(foo.back());
            foo.pop_back();
            if(!foo.empty())
                bar.push_back(foo.back());
            foo.pop_back();
        }
    }
}
