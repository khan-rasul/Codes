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
ll memo[1000000+10],a,b;
ll func(ll n)
{
    if(memo[n]!=-1)
        return memo[n];
    return memo[n]=((a*func(n-2))%mod+(b*func(n-1))%mod)%mod;

}
int main()
{
    //fast();
    memset(memo,-1,sizeof memo);
    ll n,q;
    cin>>n>>q;
    cin>>memo[1]>>memo[2];
    cin>>a>>b;
    ll arr[n+10],p[n+10];
    memset(arr,0,sizeof arr);
    memset(p,0,sizeof p);
    for(ll i=1;i<=n;i++)
        cin>>arr[i];
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        p[l]=(p[l]+func(1))%mod;
        p[l+1]=(p[l+1]+(((func(2)-(b*func(1))%mod)+mod))%mod)%mod;
        p[r+1]=(p[r+1]-func(r-l+2)+mod)%mod;
        p[r+2]=(p[r+2]-(a*func(r-l+1))%mod+mod)%mod;
    }
    for(ll i=2;i<=n;i++)
    {
        p[i]=((p[i]+(b*p[i-1])%mod)%mod+(a*p[i-2])%mod)%mod;
    }
    for(ll i=1;i<=n;i++)
        cout<<(arr[i]+p[i]+mod)%mod<<" ";
}
