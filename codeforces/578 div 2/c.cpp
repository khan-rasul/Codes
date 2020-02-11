/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
int main()
{
    //fast();
    ll n , m ,q;
    cin>>n>>m>>q;
    ll temp = __gcd(n,m);
    ll total = (n*m) / temp;
    ll x = n / temp, y = m / temp;
    ll meet = x*y;
    // cout<<meet<<endl;
    while(q--)
    {
    	ll a,b,c,d;
    	cin>>a>>b>>c>>d;
    	if(a == 1)
    	{
    		ll num = meet;
    		while(num)
    	}
    }
}
