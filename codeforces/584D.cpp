/*
* I'm a Ghost
* Now you see me, now you don't
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
	{
		if(x % i == 0) return false;
	}
	return true;
}
int main()
{
	// fast();
    ll n;
    cin>>n;
    if(isprime(n))
    {
    	cout<<"1\n"<<n<<endl;
    	return 0;
    }
    ll i;
    for(i = n - 2 ; i > 1 ; i-- )
    {
    	if(isprime(i)) 
    		break;
    }
    ll diff = n - i;
    for(ll p = 2 ; p <= diff ; p++ )
    {
    	if(isprime(p) && ( !(diff - p) || isprime(diff - p)) )
    	{
    		if(diff - p)
    		{
    			cout<<"3\n"<<i<<" "<<p<<" "<<diff - p<<endl;
    		}
    		else
    		{
    			cout<<"2\n"<<i<<" "<<p<<endl;
    		}
    		break;
    	}
    }
}
