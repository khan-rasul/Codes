/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf (1ll<<60)
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
        ll n;
        cin>>n;
        ll a[n], b[n];
        for(ll i = 0 ; i < n ; i++ )
            cin>>a[i];
        for(ll i = 0 ; i < n ; i++ )
            cin>>b[i];
        ll dp[n + 2][3][3];
        for(ll i = 0 ; i <= n ; i++)
            for(ll j = 0 ; j < 3; j++)
                for(ll k = 0 ; k < 3; k++)
                    dp[i][j][k] = -inf;
        dp[0][0][0] = a[0];
        dp[0][1][1] = b[0];
        ll ans = max( a[0] , b[0] );
        for(ll i = 1 ; i < n ; i++ )
        {
            for(ll j = 0 ; j < 3 ; j++ )
            {
                if(j > 0)
                dp[i][j][1] = max(b[i] , max(dp[i - 1][j][1] + b[i] , dp[i - 1][j - 1][0] + b[i] ) ) ;
                dp[i][j][0] = max(a[i] , max(dp[i - 1][j][1] + a[i] , dp[i - 1][j][0] + a[i]) );
                ans = max(ans , max(dp[i][j][0] , dp[i][j][1]));
            }
        }
        cout<<ans<<endl;
    }
}
