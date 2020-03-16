/*
* Fingers Crossed
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
ll n , arr[100009];
int main()
{
    // fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	ll res = 0;
    	for(ll i = 0 ; i < n ; i++ )
    	{
    		cin>>arr[i];
    		if(i && arr[i] != -1 && arr[i - 1] != -1)
    		res = max(res , abs(arr[i] - arr[i - 1]));
    	}
    	ll l = -1 , r = 0;
    	ll ans = -inf , k = 0;
    	for(ll i = 0 ; i < n ; i++ )
    	{
    		if(arr[i] == -1)
    		{
    			// cerr<<i<<" ";
    			if(r < i ) r = i;
    			while(r < n && arr[r] == -1) r++;
    			if(l == -1 && r >= n)
    			{
    				ans = 0;
    				k = 0;
    				break;
    			}
    			if(r >= n )
    			{
    				if(ans <= 0)
	    			{
	    				ans = 0;
	    				k = arr[l];
	    			}
	    			continue;

    			}

    			if(l == -1)
    			{
    				if(ans <= 0)
	    			{
	    				ans = 0;
	    				k = arr[r];
	    			}
	    			continue;
    			}
    			if(ans <= (ll)ceil(abs(arr[r] - arr[l]) / 2.0))
    			{
    				ans = (ll)ceil(abs(arr[r] - arr[l]) / 2.0);
    				k = min(arr[l] , arr[r] ) + ans;
    			}
    			// cerr<<l<<" "<<r<<endl;
    		}
			else if(arr[i] != -1)
				l = i;
    	}
    	// cerr<<endl;
    	ans = -inf;
    	if(arr[0] == -1) arr[0] = k;
    	for(ll i = 1 ; i < n ; i++)
    	{
    		if(arr[i] == -1) arr[i] = k;
    		ans = max(ans , abs(arr[i] - arr[i - 1]) );
    	}

    	cout<<ans<<" "<<k<<endl;
    }
}
