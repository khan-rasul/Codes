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
ll factorial[1000000];
ll fact(ll n)
{
	if(n < 1)
		return 1;
	if(factorial[n] != 0) return factorial[n];
	return factorial[n] = fact(n - 1) * n % mod;
}
ll inverse[1000000];
ll inv(ll n)
{
	if(inverse[n] != -1) return inverse[n];
	return inverse[n] = power(n , mod - 2 , mod);
}

ll comb(ll n , ll r)
{
	return (fact(n) * inv(fact(n - r)) % mod) * inv(fact(r)) % mod;
}
