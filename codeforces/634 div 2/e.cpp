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
	fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll freq[201] = {0} , arr[n];
    	for(ll i = 0 ; i < n ; i++)
    	{
    		cin>>arr[i];
    		freq[arr[i]]++;
    	}
    	ll l = -1 , r = n , lf[201] = {0} , rf[201] = {0};
    	ll ans = 0;
    	while(true)
    	{
    		cerr<<l<<" "<<r<<" ";
    		ll m = 0;
    		ll temp = 0;
    		for(ll i = 1 ; i <= 200 ; i++ )
    		{
    			temp = max(temp , freq[i] - lf[i] - rf[i]);
    			m = max(m , min(lf[i] , rf[i]));
    		}
    		cerr<<temp + 2 * m<<endl;
    		ans = max(ans , temp + 2 * m);
    		if(l + 1 >= r) break;
    		if(lf[arr[l + 1]] + 1 == rf[arr[l + 1]] && rf[arr[r - 1]] + 1 == lf[arr[r - 1]])
    		{
    			if(rf[arr[l + 1]] > lf[arr[r - 1]])
    			{
    				l++;
    				lf[arr[l]]++;
    			}
    			else
    			{
    				r--;
    				rf[arr[r]]++;
    			}
    		}
    		else if(lf[arr[l + 1]] + 1 == rf[arr[l + 1]]) 
    		{
    			l++;
    			lf[arr[l]]++;
    		}
    		else// if(rf[arr[r - 1]] + 1 == lf[arr[r - 1]])
    		{
    			r--;
    			rf[arr[r]]++;
    		}
    		
    	}
    	cout<<ans<<endl;
    }
}
