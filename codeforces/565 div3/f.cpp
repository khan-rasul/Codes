/*-----lusar98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
using namespace std;
int main()
{
    //fast();
    ll n;
    cin>>n;
    vector< vector< ll > > foo(n);
    for(ll i=0;i<n;i++)
    {
    	ll k;
    	cin>>k;
    	vector<ll> bar[3];
    	for(ll j=0;j<k;j++)
    	{
    		ll c,d;
    		cin>>c;
            cin>>d;
    		bar[c-1].push_back(d);
    	}
    	if(!bar[0].empty())sort(bar[0].rbegin(),bar[0].rend());
    	if(!bar[1].empty()) bar[1][0] = *max_element(bar[1].begin() , bar[1].end() );
    	if(!bar[2].empty()) bar[2][0] = *max_element(bar[2].begin() , bar[2].end() );
    	bar[0].resize( min( (ll)bar[0].size(), 3ll ) );
    	bar[1].resize( min( (ll)bar[1].size(), 1ll ) );
    	bar[2].resize( min( (ll)bar[2].size(), 1ll ) );
    	bar[0].pb(0);
    	bar[1].pb(0);
    	bar[2].pb(0);
        foo[i].pb(0);
    	foo[i].pb( max(bar[0][0], max( bar[1][0], bar[2][0] ) ) );
    	if(bar[0][0])
    	{
    		ll temp=0;
    		if(bar[0][1])
    			temp=bar[0][0]+bar[0][1];
    		if(bar[1][0]!=0)
    			temp = max(temp, bar[0][0]+bar[1][0]);
    		if(temp)
    			foo[i].pb(temp);
    	}
        if(bar[0].size()==4)
            foo[i].pb(bar[0][0]+bar[0][1]+bar[0][2]);
        foo[i].pb(0);
        foo[i].pb(foo[i][1]);
        foo[i].pb(max(bar[0][0],bar[1][0]));
        foo[i].pb(bar[0][0]);
    }
    ll dp[n+5][11];
    memset(dp, -1, sizeof dp);
    for(ll i =0;i<foo[0].size()-4;i++)
        dp[0][i]=foo[0][i];
    for(ll i=1;i<n;i++)
    {
    	for(ll j =0 ;j<10;j++)
        {
            if(dp[i-1][j]!=-1)
            {
                for(ll k =0;k<foo[i].size()-4;k++)
                {
                    if((j+k)<10)
                        dp[i][(j+k)%10]= max(dp[i][(j+k)%10], dp[i-1][j] + foo[i][k] );
                    else
                        dp[i][(j+k)%10]= max(dp[i][(j+k)%10], dp[i-1][j] + foo[i][k] + foo[i][k+foo[i].size()-4] );
                }
            }
        }
    }
    ll ans=0;
    for(ll i=0;i<10;i++)
    {
        ans=max(ans,dp[n-1][i]);
    }
    cout<<ans<<endl;
}
