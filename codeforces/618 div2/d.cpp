/*
* All my senses intensify
* Whenever you and I, we dive
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
    // fast();
    ll n;
    cin>>n;
    vector<pair<ll,ll> > foo(n);
    for(ll i = 0 ; i < n ; i++ )
    cin>>foo[i].ff>>foo[i].ss;
    if( n & 1)
    return cout<<"NO\n", 0;
	double x = (double)(foo[0].ff + foo[n / 2].ff ) / 2;
	double y = (double)(foo[0].ss + foo[n / 2].ss ) / 2;
	ll flag = 1;
    for(ll i = 0 ; i < n / 2 ; i++ ) 
    {
    	double a = (double)(foo[i].ff + foo[n / 2 + i].ff ) / 2;
		double b = (double)(foo[i].ss + foo[n / 2 + i].ss ) / 2;
		if(x != a || y != b)
		{
			flag = 0;
			break;
		}
    }
    cout<<(flag ? "YES" :"NO")<<endl;
}
