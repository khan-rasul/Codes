const ll MAX = 1000000;
ll power(ll a, ll b, ll m)
{
	if(b == 0) return 1;
	if(b == 1)
		return a % m;
	ll temp = power( a , b / 2 , m );
	temp = ( temp * temp ) % m;
	if(b % 2)
		temp = (a * temp) % m;
	return temp;
} 
ll factorial[MAX];
ll fact(ll n)
{
	if(n < 1)
		return 1;
	if(factorial[n] != 0) return factorial[n];
	return factorial[n] = fact(n - 1) * n % mod;
}
ll comb(ll n , ll r)
{
	return (fact(n) * power(fact(n - r) , mod - 2 , mod) % mod) * power(fact(r) , mod - 2 , mod) % mod;
}
