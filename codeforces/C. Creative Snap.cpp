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
ll n,k,a,b;
vector<ll> foo;
ll num=0;
ll solve(ll l,ll r)
{
    ll temp1=lower_bound(foo.begin(),foo.end(),l+1)-foo.begin();
    ll temp2=upper_bound(foo.begin(),foo.end(),r+1)-foo.begin();
    ll length=temp2-temp1;
    ll power;
    if(length)
        power=b*(r-l+1)*length;
    else
        power=a;
    if(l==r||length==0)
        return power;
    return min(power,solve(l,(l+r)/2) + solve((l+r)/2+1,r));

}
int main()
{
    //fast();
    cin>>n>>k>>a>>b;
    for(ll i=0;i<k;i++)
    {
        ll x;
        cin>>x;
        foo.pb(x);
    }
    sort(foo.begin(),foo.end());
    cout<<solve(0,(1<<n)-1);
}
