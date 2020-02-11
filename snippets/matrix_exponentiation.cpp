vector<vector<ll> > mat_expo (vector<vector<ll> > a, ll b , ll m, ll s)
{
	if(b==1)
		return a;
	vector<vector<ll> > temp = mat_expo(a,b/2,m,s), foo( s);
	for(ll i=0;i<s;i++)
	{
		foo[i].reserve(s);
		for(ll j =0;j<s;j++)
		{
			ll sum=0;
			for(ll k =0;k<s;k++)
			{
				sum+= (temp[i][k]*temp[k][j]) % m;
				sum%=m;
			}
			foo[i][j]=sum;
		}
	}
	if(b %2)
	{
		for(ll i=0;i<s;i++)
		{
			for(ll j =0;j<s;j++)
			{
				ll sum=0;
				for(ll k =0;k<s;k++)
				{
					sum+= (foo[i][k]*a[k][j]) % m;
					sum%=m;
				}
				temp[i][j]=sum;
			}
		}
		return temp;
	}
	return foo;
}