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
    ll n , k;
    cin>>n>>k;
    ll arr[n];
    for(ll i = 0 ; i < n ; i++ )
    {
    	cin>>arr[i];
    }
    ll dp[n][n][2][k];
    memset(dp , 0 , sizeof dp);
    ll ans = 0;
    for(ll i = n - 1 ; i >= 0 ; i-- )
    {
        for(ll j = i ; j < n ; j++ )
        {
            dp[i][j][0][ ((arr[j] % k) + k) % k ] += 1;
            if(i != j)
            for(ll m = 0 ; m < k ; m++ )
            {
                ll temp = (m + (arr[j] % k) + k) % k ;
                dp[i][j][1][temp] = max(dp[i][j][1][temp] , dp[i][j - 1][1][m] );
                dp[i][j][0][temp] += dp[i][j - 1][0][m];
                if(dp[i][j][0][temp] >= k)
                {
                    dp[i][j][0][temp] -= k;
                    dp[i][j][1][temp] = 1;
                }
                dp[i][j][1][m] = max( dp[i][j][1][m] , dp[i][j - 1][1][m] );
                dp[i][j][0][m] += dp[i][j - 1][0][m];
                if(dp[i][j][0][m] >= k)
                {
                    dp[i][j][0][m] -= k;
                    dp[i][j][1][m] = 1;
                }
            }
            if((dp[i][j][0][0] > 0 && dp[i][j][0][0] % k == 0) || (dp[i][j][1][0] == 1 && dp[i][j][0][0] == 0)) ans++;
        }
    }
    cout<<ans<<endl;
}
