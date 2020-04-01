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
ll solve(ll a , ll b)
{
	if(!b) return 0;
	ll ans = a / b;
    a = a % b;
    if(a)
    ans += (b / a) + solve(a , b % a);
    return ans;
}
int main()
{
    // fast();
    ll a , b;
    cin>>a>>b;
    cout<<solve(a , b)<<endl;

}
