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
    vector<ll> foo(n);
    for(ll i=0;i<n;i++)
        cin>>foo[i];
    //sort(foo.begin(),foo.end());
    map<ll,ll> data;
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            data[foo[i]+foo[j]]++;
        }
    }
    ll ans=0;
    for(map<ll,ll>::iterator it=data.begin();it!=data.end();it++)
    {
        if(ans<it->ss)
            ans=it->ss;
    }
    cout<<ans;
}
