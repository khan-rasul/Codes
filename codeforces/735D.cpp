/*
* You had no aura, I had no wings
* You had your troubles and I had my things
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
	for(ll i = 2 ; i * i <= x ; i++ )
		if(x % i == 0)
			return false;
	return true;
}
int main()
{
    // fast();
    ll n;
    cin>>n;
    if(isprime(n))
    	return cout<<"1\n", 0;
    if(n % 2 == 0)
    {
    	cout<<"2\n";
    }
    else
    {
    	if(isprime(n - 2))
    		cout<<"2\n";
    	else
    		cout<<"3\n";
    }
}
