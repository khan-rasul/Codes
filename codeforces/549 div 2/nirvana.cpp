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
ll prod(vector<ll> m)
{
    ll z=1,i;
    for(i=0;i< (ll)m.size()-1;i++)
        z*=m[i];
    if(m[i])
    z*=m[i];
    return z;

}
int main()
{
    //fast();
    ll n;
    cin>>n;
    vector<ll> a,b;
    while(n)
    {
        a.pb(n%10);
        b.pb(9);
        n/=10;
    }
    ll ans=prod(a);
    for(ll i=(ll)a.size()-1;i>0;i--)
    {
        b[i]=a[i]-1;
        ans=max(ans,prod(b));
        b[i]=a[i];
    }
   cout<<ans;
}
