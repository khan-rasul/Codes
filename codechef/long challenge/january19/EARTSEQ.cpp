/*-----lusar_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
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
    ll T;
    cin>>T;
    sieve(1000000);
    while(T--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        if(n==3)
        {cout<<"6 10 15\n"; continue;}
        for(ll i=0;i<n;i++)
        {
            arr[i]=1;
        }
        ll v=0,w=0;
        for(ll i=0;i<n-1;i++)
        {
            if(i%2==0)
            {
                arr[i]*=primes[v];
                arr[i+1]*=primes[v];
                v++;
                v%=2;
            }
            else
            {
                arr[i]*=primes[n-w];
                arr[i+1]*=primes[n-w];
                w++;
            }
        }
        if((n-2)%4==0)
        {
            arr[n-1]/=primes[0];
            arr[n-2]/=primes[0];
            arr[n-1]*=primes[2];
            arr[n-2]*=primes[2];
        }
        arr[n-1]*=primes[3];
        arr[0]*=primes[3];
        for(ll i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        /*bool flag=true;
        set<ll> foo;
        for(ll i=0;i<n;i++)
        {
            if(foo.find(arr[i])!=foo.end())
            {
                cout<<"pairwise indistinct ";
                flag=false;
                break;
            }
            foo.insert(arr[i]);
            if(arr[i]>(ll)(1e+9))
            {
                cout<<"range exceeded ";
                flag=false;
                break;
            }
            if(__gcd(arr[i],arr[(i+1)%n])==1)
            {
                cout<<"i,i+1 coprime ";
                flag=false;
                break;
            }
            if(__gcd(__gcd(arr[i],arr[(i+1)%n]),arr[(i+2)%n])!=1)
            {
                cout<<"i,i+1,i+2 not comprime ";
                flag=false;
                break;
            }
        }
        flag?cout<<"Possible\n":cout<<"Not Possible "<<n<<"\n";*/
    }
}
