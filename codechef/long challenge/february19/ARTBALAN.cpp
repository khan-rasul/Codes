/*-----lusar_98-----*/
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
        string s;
        cin>>s;
        ll arr[26];
        memset(arr,0,sizeof arr);
        for(ll i=0;i<s.size();i++)
            arr[s[i]-'A']++;
        vector<ll> foo;
        for(ll i=0;i<26;i++)
        {
            if(arr[i])
                foo.pb(arr[i]);
        }
        sort(foo.begin(),foo.end());
        ll n=foo.size(),ls=n-1,mr=n+1;
        ll a=0,b=0,c=0;
        for(;ls>=1 && s.size()%ls!=0;ls--);
        for(;mr<=26 && s.size()%mr!=0;mr++);
        if(s.size()%n==0)
        {
            ll x=s.size()/n;
            for(ll i=foo.size()-1;i>=0 && x<foo[i];i--)
                a=a+foo[i]-x;
        }
        else
            a=mod;
        if(ls>0 && s.size()%ls==0)
        {
            ll x=s.size()/ls;
            for(ll i=foo.size()-1;i>=0 && x<foo[i];i--)
                b=b+foo[i]-x;
            for(ll i=0;i<n-ls;i++)
                b+=foo[i];
        }
        else
            b=mod;
        if(s.size()%mr==0 && mr<=26)
        {
            ll x=s.size()/mr;
            for(ll i=foo.size()-1;i>=0 && x<foo[i];i--)
                c=c+foo[i]-x;
        }
        else
            c=mod;
        cout<<min(a,min(b,c))<<endl;
        //cout<<n<<" "<<ls<<" "<<mr<<endl;
    }
}
