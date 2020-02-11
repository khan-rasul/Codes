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
vector<ll> primes;
void sieve(ll n)
{
    bitset<1000000> check;
    for(ll i=2;i<=n;i++)
    {
        if(!check[i])
        {
            primes.pb(i);
            for(ll j=i*i;j<=n;j+=i)
            {
                check[j]=1;
            }
        }
    }
}
int main()
{
    //fast();
    ll t;
    cin>>t;
    sieve(100000);
    while(t--)
    {
        ll a;
        cin>>a;
        ll x=__builtin_clzll(a);
        ll z=(1ll<<(64-x)) - 1;
        ll b=z-a;
        if(b==0)
        {
            ll i;
            for(i=0;i<primes.size() && primes[i]<=sqrt(a);i++)
            {
                if(a%primes[i]==0)
                    break;
            }
            if(a%primes[i]==0)
            {
                cout<<a/primes[i];
            }
            else
                cout<<1;
        }
        else
        cout<<z;
        cout<<endl;
    }
}
