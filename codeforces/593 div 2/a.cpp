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
    ll t;
    cin>>t;
    while(t--)
	{
		ll a , b, c;
        cin>>a>>b>>c;
        ll x = a , y= b , z = c;
        ll ans = 0;
        ans += 3 * min( a , b/2 );
        b -= min( 2 * a , b );
        ans += 3 * min( b , c/2 );
        ll ano = 3 * min( y , z/2 );
         y -= min( y , z/ 2 );
         ano += 3* min( x , y/2 );
        cout<<max(ano ,ans )<<endl;
    }
}
