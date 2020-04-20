/*
* I'm a Ghost
* Now you see me, now you don't
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
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n , l ,r;
    	cin>>n>>l>>r;
    	ll g = 0 , i;
    	for( i = 1 ; i < n && (g + (n - i) * 2) < l; i++ )
    	{
    		g += (n - i) * 2;
    	}
    	ll flag = 1;
    	while( flag)
    	{	
    		for(ll j = g + 1; j <= g + (n - i) * 2; j++ )
	    	{
	    		if(j > r) {
	    			flag = 0; break;
	    		}
	    		if(j >= l)
	    		{
	    			if(j % 2)
	    			{
	    				cout<<i<<" ";
	    			}
	    			else
	    			{
	    				ll m = j - g;
	    				cout<<(m / 2) + i<<" ";
	    			}
	    		}
	    	}
	    	g += (n - i) * 2;
	    	i++;
	    	if(i >= n) break;
	    }
	    if(r == (n - 1) * n + 1)
	    	cout<<1<<" ";
	    cout<<endl;
    }
}
