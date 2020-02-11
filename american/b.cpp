/*number of integers between l and r where the number of factors is prime  */
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
    bool arr[n] = {0};
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
bool isprime(ll n)
{
	return binary_search(primes.begin() , primes.end() , n);
}
ll check(ll n)
{
	ll i;
	if(isprime(n)) return 1;
	for(i = 0 ; primes[i] * primes[i] <= n ; i++)
		if(n % primes[i] == 0)
			break;
	ll cnt = 0 ;
	while( n % primes[i] == 0)
	{
		n /= primes[i];
		cnt++;
	}
	if( n == 1 && isprime(cnt + 1) ) return 1;
	return 0;
}
int main()
{
    //fast();
    sieve(2 * 100000 + 5);
    ll dp[2 * 100000 + 5];
    dp[1] = 0; dp[0] = 0;
    for(ll i = 2 ; i <= 200005 ; i++)
    {
    	dp[i] = dp[i - 1] + check(i);
    }
    ll t;
    cin>>t;
    while(t--)
    {
    	ll l , r;
    	cin>>l>>r;
    	cout<<dp[r] - dp[l-1]<<endl;
    }
}
