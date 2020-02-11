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
    ll n,m,k;
    cin>>n>>m>>k;
    vector<pair<ll,ll> > foo,temp;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        foo.pb({x,i});
    }
    temp=foo;
    sort(foo.rbegin(),foo.rend());
    multiset<ll> bar;
    ll sum=0;
    for(ll i=0;i<m*k;i++)
        {bar.insert(foo[i].ff);sum+=foo[i].ff;}
        cout<<sum<<endl;
    ll count=m,tot=0;
    for(ll i=0;i<n && tot<k-1;i++)
    {
        multiset<ll>::iterator it=bar.find(temp[i].ff);
        if(count==0)
            {cout<<i<<" ";count=m;tot++;}
        if(it!=bar.end())
        {
            bar.erase(it);
            count--;
        }
    }

}
