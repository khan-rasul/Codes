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
int main()
{
    //fast();
    ll T;
    cin>>T;
    while(T--)
    {
    	ll n;
    	cin>>n;
    	vector<ll> foo(n);
    	for(ll i=0;i<n;i++)
    		cin>>foo[i];
    	sort(foo.begin(),foo.end());
    	auto it = unique(foo.begin(), foo.end());
    	foo.resize(distance(foo.begin(),it));
    	reverse(foo.begin(),foo.end());
    	ll x=0;
    	for(ll i=2;i<foo.size();i++)
    	{
    		x=__gcd(x,foo[i]);
    	}
    	cout<<max( __gcd(x,foo[0]) + foo[1] , foo[0] + __gcd(x,foo[1]) )<<endl;
    }
}
