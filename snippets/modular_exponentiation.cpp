// Modular Exponentiation template
ll power(ll a, ll b, ll m)
{
	if(a == 0) return 0;
	if(b == 0) return 1;
	if(b == 1) return a % m;
	ll temp = power( a , b / 2 , m );
	temp = ( temp * temp ) % m;
	if(b % 2)
		temp = (a * temp) % m;
	return temp;
} 
// end of template