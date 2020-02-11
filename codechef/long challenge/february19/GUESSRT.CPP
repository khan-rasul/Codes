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
ll x,y;
ll power(ll a, ll p, ll m)
{
    if(p==1)
        return a%m;
    ll temp=power(a,p/2,m);
    temp=(temp*temp)%m;
    if(p%2)
        return (a*temp)%m;
    return temp;
}
void inverse(ll a,ll m)
{
    if(m==0)
    {
        x=1;y=0;
        return;
    }
    inverse(m,a%m);
    ll x1,y1;
    y1=x-(a/m)*y;
    x1=y;
    x=x1;y=y1;
}
int main()
{
    //fast();
    ll T;
    cin>>T;
    while(T--)
    {
        x=1;y=0;
        ll n,m,k;
        cin>>n>>k>>m;
        ll q = power( n , (m+1)/2 , mod) ;
        ll p = ( q - power( n-1 , (m+1)/2 , mod ) +mod)%mod;
        if(m%2==0)
        {
            ll temp = (( q * power( n , (m+1)/2 , mod ))%mod * (n+k) ) % mod;
            p = ((( p * power( n , (m+1)/2 , mod ))%mod * ( n + k )) % mod + ( q * power( n-1 , (m+1)/2 , mod ) ) % mod ) % mod;
            q=temp;
        }
        ll gcd=__gcd(p,q);
        p/=gcd;q/=gcd;
        //cout<<p<<" / "<<q<<endl;
        inverse(q,mod);
        x+=mod;
        x%=mod;
        ll ans=(p*x)%mod;
        cout<<ans<<endl;
    }
}
