/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
int main()
{
    //fast();  
    ll n,m;
    cin>>n>>m;
    ll arr[n+5];
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    vector< pair<ll,ll > > seg(m+2);
    for(ll i=0;i<m;i++)
    cin>>seg[i].ff>> seg[i].ss;
    vector<ll> q;
    ll ans=0;
    ll bs=sqrt(n);
    for(ll i=0;i<n;i++)
    {
        vector<ll> query;
        ll brr[n+5] ={0};
        for(ll j=0; j < m;j++)
        {
            if(seg[j].ff>(i+1) || (i+1)>seg[j].ss)
            {
                query.pb(j+1);
                brr[ seg[j].ff]-=1;
                brr[ seg[j].ss +1]+=1;
            }
        }
        for(ll i=1;i<=n;i++)
        brr[i]+=brr[i-1];
        ll nex[n+2];
        for(ll i=0;i<n;i++)
        {
            nex[i]= arr[i]+brr[i+1];
        }
        ll checker = arr[i]- *min_element(nex, nex +n);
        if(ans<checker)
        {
            ans= checker;
            q = query;
        }
    }
    
    cout<<ans<<endl;
    cout<<q.size()<<endl;
    for(ll i=0;i<q.size();i++) cout<<q[i]<<" ";
}
