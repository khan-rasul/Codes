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
    ll n,m,q;
    cin>>n>>m>>q;
    vector<pair<ll,ll> > foo(m);
    ll arr[m]={0};
    for(ll i=0;i<n;i++)
    {
    	ll x;
    	cin>>x;
    	arr[x-1]++;
    }
    for(ll i=0;i<m;i++)
    {
    	foo[i]={arr[i],i};
    }
    sort(foo.begin(),foo.end());
    ll diff[m]={0};
    for(ll i=1;i<m;i++)
    {
    	diff[i]=foo[i].ff-foo[i-1].ff;
    }
    ll part[m]={0};
    for(ll i=1;i<m;i++)
    {
    	part[i]=part[i-1]+i*diff[i];
    }
    vector<ll> sorted[m];
    for(ll i=0;i<m;i++)
    {
    	for(ll j=i;j<m;j++)
    	sorted[i].pb(foo[i].ss);
    }
    while(q--)
    {
    	ll k;
    	cin>>k;
    	k-=n;
    	ll ind = lower_bound(part,part + m)-part;
    	
    }
}