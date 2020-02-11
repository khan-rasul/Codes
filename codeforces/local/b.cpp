/*
* Look in my eyes, what do you see?
* The cult of personality
*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf ((ll)1e18)
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
ll comb(ll n)
{
	if(n < 3) return 0;
	else
		return n * (n - 1) * (n - 2) / 6;
}
int main()
{
    // fast();
	ll n;
	cin>>n;
	ll arr[n + 1];
	for(ll i = 0 ; i < n ; i++)
		cin>>arr[i];
	ll ans = 0;
	for(ll i = 0 ; i < n ; i++ )
	{
		vector<ll> temp(3, 0);
		for(ll j = i ; j < n ; j++)
		{
		 	temp[((arr[j] % 3) + 3) % 3]++;
		 	ll calc = temp[0] * temp[1] * temp[2] + comb(temp[0] ) + comb(temp[1]) + comb(temp[2]);
		 	if( calc > 0 && calc % 3 == 0)
				ans++;
		}
		
	}
	cout<<ans<<endl;
}
