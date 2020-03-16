/*
* I'm a Ghost
* Now you see me, now you don't
* 	    ~wrt CF obviously~
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
    ll n , m;
    cin>>n>>m;
    ll a[n][m] , b[n][m];
    for(ll i = 0 ; i < n ; i++ )
    	for(ll j = 0 ; j < m ; j++ )
    	{
    		cin>>a[i][j];
    		b[i][j] = 0;
    	}
    vector<pair<ll,ll>> op;
    for(ll i = 0 ; i < n - 1 ; i++ )
    {
    	for(ll j = 0 ; j < m - 1 ; j++ )
    	{
    		if(a[i][j] && a[i][j + 1] && a[i + 1][j + 1] && a[i + 1][j])
    		{
    			b[i][j] = b[i + 1][j + 1] = b[i + 1][j] = b[i][j + 1] = 1;
    			op.pb({i + 1,j + 1});
    		}
    	}
    }
    for(ll i = 0 ; i < n ; i++ )
    	for(ll j = 0 ; j < m ; j++ )
    	{
    		if(a[i][j] != b[i][j])
    		{
    			cout<<"-1\n";
    			return 0;
    		}
    	}
    cout<<op.size()<<endl;
    for(ll i = 0 ; i < op.size() ; i++ )
    {
    	cout<<op[i].ff<<" "<<op[i].ss<<endl;
    }
}
