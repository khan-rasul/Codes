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
int main()
{
    fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	if(n == 1)
    	{
    		cout<<"0 0\n";
    		continue;
    	}
    	ll a = 0 , b = 0;
    	ll chk = n;
    	n = sqrt(n);
    	vector<ll> foo;
    	for(ll i = 1 ; i * i <= n ; i++)
    	{
    		if(n % i == 0)
			{
				foo.pb(i);
				if(i != n / i) 
				{
					foo.pb(n / i);
				}
			}
    	}
    	set<ll> dat;
    	for(ll i = 0 ; i < foo.size() ; i++ )
    	{
    		for(ll j = i ; j < foo.size() ; j++)
    		{
    			if(foo[i] * foo[j] < n)
    			dat.insert(foo[i] * foo[j]);
    		}
    	}
    	vector<ll> bar;
    	for(ll x : dat) bar.pb(x);
    	n = chk;
    	ll prev = 0 , curr , flag = 0;
    	for(ll i = bar.size() - 1 ; i >= 0 ; i-- )
    	{
    		curr = (n / bar[i] - bar[i]) * (n / bar[i] - bar[i]);
    		if(flag)
    		a += curr - prev;
    		else
    			b += curr - prev;
    		prev = curr;
    		flag  = 1 - flag;
    	}
    	if(bar.size() % 2) swap(a , b);
    	cout<<a<<" " <<b<<endl;
    }
}
