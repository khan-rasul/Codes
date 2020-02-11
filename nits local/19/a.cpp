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
    bool arr[n]={0};
    for(ll i=2;i<=n;i++)
    {
        if(!arr[i])
        {
            primes.push_back(i);
            for(ll j=i*i;j<=n;j+=i)
                arr[j]=1;
        }
    }
}
int main()
{
    //fast();
    ll t;
    cin>>t;
    sieve(10);
    while(t--)
    {
        ll n;
        cin>>n;
        ll i;
        for(i=0;i<primes.size() && n%primes[i];i++);
        if(i<primes.size() && n%primes[i]==0)
        {
            ll ans=0;
            while(n!=1)
            {
                n/=primes[i];
                ans++;
            }
            cout<<primes[i]<<" "<<ans<<endl;
            continue;
        }
        else
        {
            double s=sqrt(n);
            if( ((ll)s * (ll)s) == n)
                cout<<(ll)s<<" "<<2<<endl;
            continue;
        }
    }
}
