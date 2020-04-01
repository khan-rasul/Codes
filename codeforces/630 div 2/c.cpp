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
    	ll n , k;
    	cin>>n>>k;
    	string s;
    	cin>>s;
    	char arr[n / k + 5][k];
    	ll v = 0;
    	for(ll i = 0 ; i < n / k ; i++ )
    	{
    		for(ll j = 0 ; j < k ; j++ )
    		{
    			arr[i][j] = s[v++];
    		}
    	}
    	ll ans = 0;
    	for(ll i = 0 ; i < k / 2 ; i++ )
    	{
    		ll freq[26] = {0} ;
    		for(ll j = 0;  j < n / k ; j++)
    		{
    			freq[arr[j][i] - 'a']++;
    			freq[arr[j][k - i - 1] - 'a']++;
    		}
    		ll m = 0 , sum = 0;
    		for(ll j = 0 ; j < 26 ; j++)
    		{
    			sum += freq[j];
    			m = max(m , freq[j]);
    		}
    		ans += (sum - m);
    	}
    	if(k % 2)
    	{
    		ll freq[26] = {0} ;
    		for(ll j = 0;  j < n / k ; j++)
    		{
    			freq[arr[j][k / 2] - 'a']++;
    		}
    		ll m = 0 , sum = 0;
    		for(ll j = 0 ; j < 26 ; j++)
    		{
    			sum += freq[j];
    			m = max(m , freq[j]);
    		}
    		ans += (sum - m);
    	}
    	cout<<ans<<endl;
    }
}
