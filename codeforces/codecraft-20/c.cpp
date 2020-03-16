/*
* Fingers Crossed
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
ll n , m , p;
vector<ll> a , b;
int main()
{
    fast();
    cin>>n>>m>>p;
    a.resize(n);
    b.resize(m);
    ll ans = 0;
    ll flag = 0;
    for(ll i = 0 ; i < n ; i++)
	{
		cin>>a[i];
		if(a[i] % p != 0 && flag == 0)
		{
			ans = i;
			flag = 1;
		}
	}
	flag = 0;
    for(ll i = 0 ; i < m ; i++ )
    {
		cin>>b[i];
		if(b[i] % p != 0 && flag == 0)
		{
			ans += i;
			flag = 1;
		}
	}
    cout<<ans<<endl;

}
