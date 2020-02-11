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
    ll n,k;
    cin>>n>>k;
    map<ll,ll> foo;
    ll arr[n];
    for(ll i=0;i<k;i++)
    foo.insert({i,0});
    for(ll i=0;i<n;i++)
        {ll x; cin>>x;foo[x%k]++;}
    ll check[n]={0};
    sort(arr,arr+n);
    ll ans=0;
    ans=foo[0]-foo[0]%2;
    for(ll i=1;i<k;i++)
    {
         while(foo[i])
         {
             foo[i]--;
             if(foo[(k-i)]>0)
             {
                 foo[(k-i)]--;
                 ans+=2;
             }
             else
                break;
         }
    }
    cout<<ans;

}
