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

ll memo[(ll)3e5 + 10]={0},bs;
ll fact(ll n)
{
	if(memo[n])
		return memo[n];
	return memo[n] = ( n*fact(n-1) ) % mod;
}

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
int main()
{
    fast();
	ll n,q;
	memo[0]=1;
	cin>>n>>q;
	bs=sqrt(n);
	ll arr[n];
	vector< unordered_map<ll,ll> > foo;
	unordered_map<ll,ll> temp;
	for(ll i=0;i<=n;i++)
	{
		if(i%bs == 0)
			foo.pb(temp);
		if(i==n)
			break;
		cin>>arr[i];
		temp[arr[i]]++;
	}
	ll data[n/bs +5 ][n/bs  +5];
	memset(data, 0, sizeof data);
	for(ll i=0;i< n/bs  ;i++)
	{
		ll ans=1;
		unordered_map<ll,ll> pop;
		for(ll j=i*bs; j<n;j++)
		{
			pop[arr[j]]++;
			ans=ans*pop[ arr[j] ] ;
			ans%=mod;
			if((j+1)%bs == 0)
			{
				data[i][(j+1) /(bs)] = ans;
			}
		}
	}
	ll preans=0;
	while(q--)
	{
		ll l1,l2,r1,r2;
		cin>>l1>>l2>>r1>>r2;
		ll l = (l1*preans + l2) % n;
		ll r = (r1*preans + r2) % n;
		if(l>r) swap(l,r);
		unordered_map<ll,ll> pop;
		ll ans=1;
		if(l/bs == r/bs)
		{
			if(l/bs +(l%bs ? 1 : 0) + 1 == (r+1)/bs)
			{
				ans=data[l/bs +(l%bs ? 1 : 0)][(r+1)/bs ];
			}
			else
			for(ll i=l;i<=r;i++)
			{
				pop[arr[i]]++;
				ans=ans*pop[ arr[i] ] ;
				ans%=mod;
			}
		}
		else
		{
			unordered_map<ll,ll> x=foo[(r+1)/bs], y = foo[l/bs +(l%bs ? 1 : 0)];
			ans=data[l/bs +(l%bs ? 1 : 0)][(r+1)/bs ];
			if(ans==0) ans=1;
			for(ll i = (r+1)/bs * bs ; i<=r ; i++)
			{
				if(pop[arr[i]] ==0)
				pop[arr[i]]=x[ arr[i] ]-y[ arr[i] ];
				pop[arr[i]]++;
				ans=ans*pop[ arr[i] ];
				ans%=mod;
			}
			for( ll i = l; i<(l/bs +(l%bs ? 1 : 0)) *bs;i++)
			{
				if(pop[arr[i]] ==0)
				pop[arr[i]]=x[ arr[i] ]-y[ arr[i] ];
				pop[arr[i]]++;
				ans=ans*pop[ arr[i] ] ;
				ans%=mod;
			}
		}
		preans= (fact(r-l+1) * power(ans,mod-2,mod) ) %mod;
		cout<<preans<<"\n";
	}	
}
