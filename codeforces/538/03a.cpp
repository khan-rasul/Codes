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
    for(ll i=2;i*i<=b;i++)
    {
        if(b%i==0)
        {
            foo.pb({i,0});
            while(b%i==0)
            {
                foo[foo.size()-1].ss++;
                b/=i;
            }
        }
    }
    if(b!=1)foo.pb({b,1});
    ll ans=1ll<<60;
    for(ll i=0;i<foo.size();i++)
    {
        ll a=foo[i].ff, part=0;
        ll add = n / a;
        while(add>=1)
        {
            part+=add;
            add /= a;
        }
        ans=min(ans,part/foo[i].ss);
    }
    cout<<ans<<endl;
}
