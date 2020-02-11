/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll int
#define mod 100000007
#define inf (1ll<<60)
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
pair<ll,ll> make(ll x)
{
	if(x == 0) return {1,1};
	ll a = 0 , b = 0;
	while(x % 2 == 0)
	{
		a++;
		x/=2;
	}
	while(x % 5 == 0)
	{
		b++;
		x /= 5;
	}
	return { a , b };
}
int main()
{
    //fast();
    ll n;
    cin>>n;
    pair<ll,ll> arr[n + 2][n + 2];
    for(ll i = 1 ; i <= n ; i++ )
    	for(ll j = 1 ; j <= n ; j++)
    	{
    		ll x;
    		cin>>x;
    		arr[i][j] = make(x);
    	}
    pair<ll,ll> dp[n + 2][n + 2][2][2];
    for(ll i = 0 ; i <= n ; i++ )
    	for(ll j = 0 ; j <= n ; j++)
    		{
                dp[i][j][0][0] = {mod , mod};
                dp[i][j][1][0] = {mod , mod};
            }
    dp[0][1][0][0] = {0 , 0};
    dp[0][1][1][0] = {0 , 0};
    dp[0][1][0][1] = {-1 , -1};
    dp[0][1][1][1] = {-1 , -1};
    for(ll i = 1 ; i <= n ; i++ )
    {
    	for(ll j = 1 ; j <= n ; j++ )
    	{
    		for(ll k = 0 ; k < 2; k++)
            {
                pair<ll,ll> a = dp[i - (k == 0)][j - k][0][0], b = dp[i - (k == 0)][j - k][1][0];
                pair<ll,ll> x = {a.ff + arr[i][j].ff , a.ss + arr[i][j].ss} , y = {b.ff + arr[i][j].ff , b.ss + arr[i][j].ss};
                if(min(x.ff , x.ss) < min(y.ff , y.ss))
                {
                    dp[i][j][k][0] = x;
                    dp[i][j][k][1] = {i - (k == 0) - 1, j - k} ;
                }
                else
                {
                    dp[i][j][k][0] = y;
                    dp[i][j][k][1] = {i - (k == 0) , j - k - 1} ;
                }
                // cout<<dp[i][j][0].ff<<" "<<dp[i][j][0].ss<<" , ";
            }
    	}
    	// cout<<endl;
    }
    // cout<<min(min(dp[n][n][0][0].ff , dp[n][n][0][0].ss) , min(dp[n][n][1][0].ff , dp[n][n][1][0].ss ))<<"\n";
    string s = "";
    pair<ll,ll> k = dp[n][n][0][1] , k2 = {n - 1 , n}, pres = {n , n };
    if(min(dp[n][n][1][0].ff , dp[n][n][1][0].ss ) < min(dp[n][n][0][0].ff , dp[n][n][0][0].ss))
    {
        k = dp[n][n][1][1];
        k2 = {n , n - 1};
        cout<<min(dp[n][n][1][0].ff , dp[n][n][1][0].ss );
    }
    else
        cout<<min(dp[n][n][0][0].ff , dp[n][n][0][0].ss );
    while(k.ff != -1)
    {
    	if( k2.ss + 1 == pres.ss)
    	{
    		s += "R";
    	}
    	else
    		s += "D";
    	pres = k2;
        swap(k , k2);
        if(k2.ss + 1 == k.ss)
    	k = dp[k.ff][k.ss][1][1];
        else
        k = dp[k.ff][k.ss][0][1];
    }
    s.erase(s.length() - 1 , 1);
    reverse(s.begin() , s.end());
    cout<<endl<<s<<endl;
}