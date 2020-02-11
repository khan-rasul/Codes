/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
int main()
{
    //fast();
    ll n;
    cin>>n;
    vector<pair<ll,ll> > foo;
    for(ll i = 0 ; i < n ; i++)
    {
        ll a,b;
        cin>>a>>b;
        foo.pb({a,1});
        foo.pb({b,0});
    }
    sort(foo.begin() , foo.end() );
    vector<ll> bar;
    ll curr = 0;
    for(ll i = 0 ; i < 2*n ; i++ )
    {
        if(foo[i].ss == 1)
            curr++;
        else 
        {
            if(curr)
            bar.pb(curr);
            bar.pb(0);
            curr = 0;
        }
    }
    ll ans = bar[0];
    for(ll i = 1 ; i < bar.size() - 1; i++)
    {
        if(bar[i] == 0)
            ans = max( max(ans , 1ll) , bar[i-1] + bar[i+1]);
        else 
        {
            if(bar[i] < n)
                ans = max(ans , bar[i] + 1);
            else
                ans = max( ans , bar[i]);
        }
    }
    for(ll i = 0 ; i<bar.size() ; i++)
        cout<<bar[i]<<" ";
    cout<<"\n"<<ans<<endl;
}
