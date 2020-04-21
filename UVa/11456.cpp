/*-----lusar_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
using namespace std;
ll li[2000],ld[2000],lis=0,lds=0;
deque<ll> foo,bar;
ll LIS(ll i)
{
    ll pos=lower_bound(li,li+lis,foo[i])-li;
    li[pos]=foo[i];
    if(pos+1>lis)
        lis=pos+1;
    return pos+1;
}
ll LDS(ll i)
{
    ll pos=lower_bound(ld,ld+lds,bar[i])-ld;
    ld[pos]=bar[i];
    if(pos+1>lds)
        lds=pos+1;
    return pos+1;
}
int main()
{
    //fast();
    ll T;
    cin>>T;
    while(T--)
    {
        lis=0; lds=0;
        memset(li,0,sizeof li);
        memset(ld,0,sizeof ld);
        foo.clear(); bar.clear();
        ll n;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            foo.push_front(x);
            bar.push_front(-x);
        }
        ll ans=-1;
        for(ll i=0;i<n;i++)
            ans=max(ans,LIS(i)+LDS(i)-1);
        cout<<ans<<endl;
    }
}
