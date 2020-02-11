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
    fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,m;
    	cin>>n>>m;
    	string s[n];
    	for(ll i=0 ; i< n ; i++)
    		cin>>s[i];
    	ll ans =1ll<<60 , row[n] = {0},col[m] ={0};
    	for(ll i = 0; i< n; i++)
    	{
    		for(ll j =0 ; j < m ;j++ )
    		{
    			if(s[i][j] == '.')
    				row[i]++;
    		}
    	}
    	for(ll i =0 ; i < m ;i++)
    	{
    		for(ll j =0 ; j< n ; j++)
    		{
    			if(s[j][i] == '.')
    				col[i]++;
    		}
    	}
    	for(ll i =0 ; i< n ; i++)
    	{
    		for(ll j =0 ; j < m ;j++)
    		{
    			ll cost = row[i] + col[j];
    			if(s[i][j] == '.') cost--;
    			ans = min(ans,cost);
    		}
    	}
    	cout<<ans<<endl;
    }
}
