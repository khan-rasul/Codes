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
// Modular Exponentiation template
ll power(ll a, ll b, ll m)
{
	if(a == 0) return 0;
	if(b == 0) return 1;
	if(b == 1) return a % m;
	ll temp = power( a , b / 2 , m );
	temp = ( temp * temp ) % m;
	if(b % 2)
		temp = (a * temp) % m;
	return temp;
} 
// end of template
int main()
{
	// fast();
    string s;
    ll a , b;
    cin>>s>>a>>b;
    ll left = 0 , right = 0;
    for(ll i = 0 ; i < s.length() ; i++ )
    {
    	right = (10 * right + (s[i] - '0')) % b; 
    }
    ll ans = -1;
    for(ll i = 0 ; i < s.length() - 1 ; i++ )
    {
    	left = (left * 10 + (s[i] - '0')) % a;
    	right = ( (right - (s[i] - '0') * power(10 , s.length() - i - 1, b)) % b + b ) % b;
    	if(left == 0 && right == 0 && s[i + 1] != '0')
		{
			ans = i;
			break;
		} 
    }
    if(ans == -1)
    {
    	cout<<"NO\n";
    	return 0;
    }
    cout<<"YES\n";
    for(ll i = 0 ; i <= ans ; i++ )
    	cout<<s[i];
    cout<<"\n";
    for(ll i = ans + 1 ; i < s.length() ; i++ )
    	cout<<s[i];
    cout<<endl;
}
