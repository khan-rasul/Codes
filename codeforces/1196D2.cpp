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
    //fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n , k;
    	cin>>n>>k;
    	string s;
    	cin>>s;
    	string arr[3] = {"RGB" , "GBR" , "BRG"};
    	ll ans = mod;
    	for(ll i = 0 ; i < 3 ; i++ )
    	{
    		ll l = 3, cnt =0 ;
    		string x = arr[i];
    		while(l < n)
    		{
    			x += x;
    			l += l;
    		}
    		ll diff[n];
    		for(ll j = 0 ; j < n ; j++ )
    			diff[j] = !(s[j] == x[j]);
    		for(ll j = 0 ; j  < n ; j++ )
    		{
    			if(j >= k)
    			{
    				ans = min(cnt , ans);
    				cnt -= diff[j - k];
    			}
    			cnt += diff[j];
    		}
    		ans = min(cnt , ans);
    	}
    	cout<<ans<<endl;
    }
}
