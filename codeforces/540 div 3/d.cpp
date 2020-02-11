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
ll solve(ll arr[],ll n,ll mid)
{
    ll pg=0;
    for(ll i=0;i<mid;i++)
    {
        for(ll j=0;j*mid+i<n;j++)
            pg+=max(arr[j*mid+i]-j,0ll);
    }
    return pg;
}
int main()
{
    //fast();
    ll n,m;
    cin>>n>>m;
    ll arr[n],sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum<m)
    {
        cout<<"-1";
        return 0;
    }
    ll l=1,r=n;
    sort(arr,arr+n,greater<ll>());
    ll mid,pg;
    while(r-l>1)
    {
        mid=(l+r)/2;
        pg=solve(arr,n,mid);
        if(pg<m) l=mid;
        else r=mid;
    }
    cout<<(solve(arr,n,l)>=m?l:r)<<endl;
}
