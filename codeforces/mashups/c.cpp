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
    ll a ,b;
    cin>>a>>b;
    ll ans = 0;
    ll sum = b * (b - 1) / 2;
    sum %= mod;
    for(ll i = 1 ; i <= a ; i++)
    {
    	ans += ((((b * i + 1)) % mod) * sum ) % mod;
    	ans %= mod; 
    }
    cout<<ans<<endl;
}
