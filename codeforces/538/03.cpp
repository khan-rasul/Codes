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
    ll n,b;
    cin>>n>>b;
    vector<pair<ll,ll> > foo;
    for(ll i=2;i<=sqrt(b);i++)
        if(b%i==0)
        foo.pb({i,b/i});
    ll ans=0;
    for(ll i=0;i<foo.size();i++)
    {
        ll a=foo[i].ff,b=foo[i].ss;
        while(n/a>1 && n/b>1)
        {
            if(a==b)
            ans+=(min(n/a,n/b)/2);
            else
            ans+=min(n/a,n/b);
            a*=foo[i].ff;b*=foo[i].ss;
        }
    }
    if(foo.size()==0)
    {
        ll a=b;
        while(n/a>1)
        {
            ans+=n/a;
            a*=b;
        }
    }
    cout<<ans<<endl;

}
