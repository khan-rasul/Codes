/*
* Look in my eyes, what do you see?
* The cult of personality
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
    fast();
    ll n;
    cin>>n;
    vector<pair<pair<ll,ll> , pair<ll,ll> > > arr(n); 
    for(ll i = 0 ; i < n ; i++)
	{
        cin>>arr[i].ss.ff>>arr[i].ff.ff>>arr[i].ss.ss;
        arr[i].ff.ss = i;
    }
    sort(arr.begin() , arr.end());
    arr.pb({{0 ,0}, {0 ,0}});
    ll dp[n + 2][2100];
    memset(dp , -1 , sizeof dp);
    if(arr[0].ff.ff > arr[0].ss.ff)
    {
        dp[0][arr[0].ss.ff] = arr[0].ss.ss;
    }
    dp[0][0] = 0;
    for(ll i = 1 ; i < n ; i++ )
    {
    	for(ll j = 0 ; j <= 2000 ; j++ )
        {
            if(dp[i - 1][j] != -1)
            {
                if(arr[i].ff.ff > j + arr[i].ss.ff)
                {
                    dp[i][j + arr[i].ss.ff] = max( dp[i - 1][j] + arr[i].ss.ss , dp[i][j + arr[i].ss.ff] );
                }
                dp[i][j] = max( dp[i - 1][j] , dp[i][j] );
            }
        }
    }
    ll ans = 0;
    for(ll i = 0 ; i <= 2000 ; i++ )
    {
        if(dp[n - 1][i] > dp[n - 1][ans])
        ans = i;
    }
    cout<<dp[n - 1][ans]<<endl;
    vector<ll> sub;
    ll k = ans , j = n - 1;
    while(j > 0 )
    {
        for(ll i = 0 ; i <= 2000 ; i++ )
        {
            if( dp[j - 1][i] + arr[j].ss.ss == dp[j][k] && i + arr[j].ss.ff == k) 
            {
                sub.pb(arr[j].ff.ss + 1);
                k = i;
                break;
            }
        }
        j--;
    }
    if(dp[0][k] == arr[0].ss.ss )
        sub.pb(arr[0].ff.ss + 1);
    cout<<sub.size()<<endl;
    reverse(sub.begin() , sub.end());
    for(ll i : sub)
        cout<<i<<" ";
    cout<<endl;
}
