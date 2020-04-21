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
    ll t;
    cin>>t;
    ll num=1;
    while(t--)
    {
        ll n,d;
        cin>>n>>d;
        vector<pair<char,ll> > foo;
        for(ll i=0;i<n;i++)
        {
            string s;
            cin>>s;
            foo.push_back({s[0],stoll(s.substr(2))});
        }
        vector<ll> diff;
        ll pre=0;
        for(ll i=0;i<n;i++)
        {
            diff.push_back(foo[i].second-pre);
            pre=foo[i].second;
        }
        diff.push_back(d-pre);
        ll ans=*max_element(diff.begin(),diff.end());
        for(ll i=0;i<n;i++)
        {
            if(foo[i].first=='S')
              ans=max(ans,diff[i]+diff[i+1]);
        }
        cout<<"Case "<<num++<<": "<<ans<<endl;
    }
}
