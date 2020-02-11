/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
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
vector<ll> factors(ll n)
{
	vector<ll> res;
	for(ll i =0 ; (primes[i] * primes[i]) <= n ; i++)
	{
		if(n% primes[i] ==0)
		{
			res.pb( primes[i]);
			while(n%primes[i] == 0)
				n/=primes[i];
		}
		
	}
	if(n!=1)
			res.pb(n);
    return res;
}
const ll num = 100000;
int main()
{
    //fast();
    sieve(1000000);
    ll t;
    cin>>t;
    for(ll i =0  ; i<primes.size() && i< t ; i++)
    {
    	ll a = (num*num) % primes[i];
    	ll ans=0;
    	if(a == 0) 
        { 
            a= 25%primes[i];
            if(a == 0) 
            {
            	ans =5;
            }
            else
            {
            	ans =2;
            }
            if(ans == primes[i]) cout<<"YES\n";
            else
            	cout<<"NO "<<primes[i]<<"\n";
            continue; 
        }
        vector<ll> one = factors((num * num) - a);
        ll temp = one.back(); one.pop_back();
        reverse(one.begin() , one.end() );
        ll flag =0,pop,sicle;
        for(ll x:one)
        {
            if( ( ( ( num * num) % x )== a) && (x!=2 && x!=5) )
            {
                if(flag == 0)
                {
                    sicle = x;
                    pop = (x*x) % primes[i];
                    if(pop == 0)
                    {
                        ans = x;
                        break;
                    } 
                    flag = 1;
                }
                else
                {
                    if(((sicle * sicle) % x ) == pop )
                    {
                        ans = x;
                        break;
                    }
                }
            }
        }
        if(ans== 0) ans = temp;
        if(ans == primes[i]) cout<<"YES\n";
        else
        	cout<<"NO "<<primes[i]<<"\n";
    }
}
