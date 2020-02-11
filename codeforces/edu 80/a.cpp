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
    	ll n , d;
    	cin>>n>>d;
    	ll a = sqrt(d);
    	ll b = ceil(1.0 * d / (a + 1));
    	ll flag = 0;
    	if(a + b <= n )
    		flag = 1;
    	a++;
    	b = ceil(1.0 * d / (a + 1));
    	if(a + b <= n )
    		flag = 1;
    	a -= 2;
    	b = ceil(1.0 * d / (a + 1));
    	if(a + b <= n )
    		flag = 1;
    	cout<<(flag? "YES" : "NO")<<endl;

    }
}
