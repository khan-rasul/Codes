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
    ll n;
    cin>>n;
    vector<ll> odd,even;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        x%2?odd.pb(x):even.pb(x);
    }
    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());
    ll m=min((ll)odd.size(),(ll)even.size());
    m++;
    ll ans=0;
    if(odd.size()>even.size())
    {
        for(ll i=0;i<odd.size()-m;i++)
            ans+=odd[i];
    }
    else
    {
        for(ll i=0;i<even.size()-m;i++)
            ans+=even[i];
    }
    cout<<ans<<endl;
}
