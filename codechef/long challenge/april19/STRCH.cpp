/*-----lusar98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 100000013
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
        ll n;
        cin>>n;
        string s;
        ll ans=0;
        ll pre =0;
        cin>>s;
        char c;
        cin>>c;
        vector<ll> foo;
        for(ll i=0;i<n;i++)
        {
            if(s[i]==c)
            foo.pb(i+1);
        }
        for(ll i=1;i<foo.size();i++)
        {
            ans += foo[i-1] * (foo[i]-foo[i-1]);
        }
        ans+=foo[foo.size()-1];
        //if(foo.size() == 1)

        cout<<ans<<endl;
    }
}
