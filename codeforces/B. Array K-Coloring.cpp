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
bool compare(pair<ll,ll> a,pair<ll,ll> b)
{
    if(a.ss<b.ss)
        return true;
    return false;
}
int main()
{
    //fast();
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll> > foo;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        foo.pb({x,i});
    }
    sort(foo.begin(),foo.end());
    ll cc=0,m=1,flag=0;
    for(ll i=0;i<n;i++)
    {
        cc=cc%k+1;
        if(i<n-1 && foo[i].ff==foo[i+1].ff)
        {
            m++;
            foo[i].ff=cc;
        }
        else
        {
            if(m>k)
            {
                flag=1;
                break;
            }
            m=1;
            foo[i].ff=cc;
        }
    }
    if(flag)
        cout<<"NO",exit(0);
    sort(foo.begin(),foo.end(),compare);
    cout<<"YES\n";
    for(ll i=0;i<n;i++)
        cout<<foo[i].ff<<" ";

}
