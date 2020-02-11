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
bool isprime(ll x)
{
	for(ll i = 2 ; i * i <= x ; i++)
		if(x % i == 0)
			return false;
	return true;
}
int main()
{
    // fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll num = 2;
    	for(ll i = 2 ; i * i <= n ; i++)
		{
			if(n % i == 0) num += 2;
			if(n % i == 0 && n / i == i) num--;
		}
    	if(n == 1)  num = 4;
    	cout<<(isprime(num) ? "Yes" : "No")<<endl;
    }
}
