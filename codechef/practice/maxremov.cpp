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
    ll T;
    cin>>T;
    while(T--)
    {
        ll n,k;
        cin>>n>>k;
        vector<pair<ll,ll> > q(n),foo;
        foo.pb({0,0});
        ll arr[(ll)1e5+5]={0};
        for(ll i=0;i<n;i++)
        {
            cin>>q[i].ff>>q[i].ss;
            arr[q[i].ff]++;
            arr[q[i].ss+1]--;
        }
        ll x=0,y=0;
        for(ll i=1;i<=1e5;i++)
        {
            arr[i]+=arr[i-1];
            if(arr[i]==k) x++;
            else if(arr[i]==k+1) y++;
            foo.pb({x,y});
        }
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            ans=max(ans,foo[q[i].ff-1].ff+foo[q[i].ss].ss-foo[q[i].ff-1].ss+foo[1e5].ff-foo[q[i].ss].ff);
        }
        cout<<ans<<endl;
    }
}
