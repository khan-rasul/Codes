ll power(ll a, ll b, ll m)
{
	if(b==1)
		return a % m;
	ll temp = power(a,b/2,m);
	temp = ( temp * temp ) % m;
	if(b % 2)
		temp= (a * temp) % m;
	return temp;
} 
ll shash(string s, ll p , ll m)
{
	ll res = 0;
	ll ppow = 1;
	for(ll i = 0 ; i < s.length() ; i++ )
	{
		res = (res + (s[i] - 'a' + 1) * ppow) % m;
		ppow = (ppow * p) % m;
	}
	return res;
}