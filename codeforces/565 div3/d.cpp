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
map<ll,ll> foo;
vector<ll> primes;
void sieve(ll n)
{
    bool arr[n]={0};
    for(ll i=2;i<=n;i++)
    {
        if(!arr[i])
        {
            primes.pb(i);
            for(ll j=i*i;j<=n;j+=i)
                arr[j]=1;
        }
    }
}
bool isprime(ll x)
{   
    for(ll i=2;i*i<=x;i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
ll divisor(ll x)
{
    for(ll i=2;i*i<=x;i++)
    {
        if(x%i==0)
            return x/i;
    }
    return 0;
}
int main()
{
    //fast();
    sieve(30000000);
    ll n;
    cin>>n;
    vector<ll> a;
    for(ll i=0;i<2*n;i++)
    {
        ll x;
        cin>>x;
        foo[x]++;
    }    
    for(map<ll,ll>::reverse_iterator it=foo.rbegin();it!=foo.rend();it++)
    {
        if(!isprime(it->ff) )
        {
            foo[divisor(it->ff)] -=it->ss;
            while(it->ss--)
            {
                a.pb(it->ff);
            }
        }
    }
    for(map<ll,ll>::iterator it=foo.begin();it!=foo.end();it++)
    {
        if(it->ss > 0)
        {
            foo[ primes[ (it->ff) - 1 ] ] -= it->ss;
            while( it->ss-- )
            {
                a.pb(it->ff);
            }
        }
    }
    for(ll i=0;i<a.size();i++)
        cout<<a[i]<<" ";
}