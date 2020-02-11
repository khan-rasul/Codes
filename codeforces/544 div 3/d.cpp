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
    ll a[n],b[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=0;i<n;i++)
        cin>>b[i];
    map<pair<ll,ll>,ll> foo;
    ll ans=0,c=0,d=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]!=0)
            foo[{b[i]/__gcd(abs(b[i]),abs(a[i])) , a[i]/__gcd(abs(b[i]),abs(a[i])) }]++;
        else if(b[i]==0)
            c++;
    }
    for(map<pair<ll ,ll>,ll>::iterator it=foo.begin();it!=foo.end();it++)
    {
        ans=max(ans,it->ss);
    }
    if(n==1)
    {
        if(a[0]!=0)
            cout<<1;
        else if(b[0]==0)
            cout<<1;
            else
                cout<<0;
            return 0;
    }
    cout<<ans+c;

}
