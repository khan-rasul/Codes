/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf 1ll<<60
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
int main()
{
    //fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll a , b;
    	cin>>a>>b;
    	ll ans = 0;
    	while((pow(10 , ans + 1) - 1) <= b )
    		ans++;
    	cout<<a * ans<<endl;
    }
}
