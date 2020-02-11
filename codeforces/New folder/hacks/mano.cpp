
 /*..................................
Manojeet's template (manojeet_24)
....................................*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fl(i,a,b) for(int i=a;i<b;i++)
#define flr(i,a,b) for(int i=a;i>b;i--)
#define mod 1000000007
#define ff first
#define ss second
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
bool isvowel(char c){if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')return true;return false;}
bool prime[1000000];
vector<int> primes;
void sieve(){memset(prime, true, sizeof(prime));for(int p=2;p*p<=1000000;p++){if (prime[p]==true){for (int i=p*2; i<=1000000; i+= p)prime[i]=false;}}for (int p=2; p<=1000000;p++)if (prime[p])primes.push_back(p);}
ll gcd(ll a,ll b){if(b==0)return a;return gcd(b,a%b);}
ll fast_exp(ll x,ll n){ll ans=1;while(n){if(n&1)ans*=x;n=n>>1;ans*=x*x;}return ans;}
ll mod_exp(ll x, ll y,ll p){ll res = 1;x = x % p;while(y>0){if(y&1)res = (res*x) % p;y = y>>1;x=(x*x)%p;}return res;}
int main()
{
    int n;
    cin>>n;
    ll a[n];
    fl(i,0,n)
        cin>>a[i];
    ll ma=*max_element(a,a+n);
    int ans=1,len=0;
    fl(i,0,n)
    {
        if(ma==a[i])
        {
            ans=1;
            i++;
            while(a[i]==ma)
            {
                ans++;
                i++;
                cout<<a[i]<<" ";
            }
            //cout<<a[i]<<" ";
        }
        len=max(len,ans);
    }
    cout<<len;

}
