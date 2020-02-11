/*-----lusar98-----*/
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
    string a,b;
    cin >> a>> b;
    pair<ll,pair<ll,ll> > dp[a.length() +1 ][ b.length() +1 ];
    dp[0][0].ff=0;
    for(ll i=0;i<a.length() ; i++)
    {
    	for( ll j =0 ; j< b.length() ; j++)
    	{
    		if(b[j] == a[i])
			{
				dp[i+1][j+1].ff = dp[i][j].ff + 1 ;
				dp[i+1][j+1].ss = {i,j};
			}
			if(dp[i+1][j+1].ff < dp[i][j+1].ff)
			{
				dp[i+1][j+1].ff=dp[i][j+1].ff;
				dp[i+1][j+1].ss = {i, j +1 };
			}
			if(dp[i+1][j+1].ff < dp[i+1][j].ff)
			{
				dp[i+1][j+1].ff=dp[i+1][j].ff;
				dp[i+1][j+1].ss = { i + 1 , j};
			}
    	}
    }
    string s="";
    pair<ll,ll> k = {a.length(), b.length() };
    while(k.ff != 0 && k.ss!=0)
    {
    	if(a[k.ff-1] == b[k.ss-1])
    	s+=a[k.ff-1];
    	k = dp[k.ff][k.ss].ss;
    }
    reverse(s.begin() , s.end() );
    cout<<s;
}
