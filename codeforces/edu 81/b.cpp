/*
* All my senses intensify
* Whenever you and I, we dive
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
    	ll n , x;
    	cin>>n>>x;
    	string s ;
    	cin>>s;
    	s += s ;
    	n += n;
    	ll arr[n] ={0};
    	if(s[0] == '0') arr[0]++;
    	else arr[0]--;
    	ll ans = (x == arr[0]);

    	for(ll i = 1 ; i < n ; i++)
    	{
    		if(s[i] == '0')
    			arr[i] = arr[i - 1] + 1;
    		else
    			arr[i] = arr[i - 1] - 1;
    		if(arr[i] == x) ans++;
    	}
    	if(arr[n-1] == 0)
		{ 
			if(ans > 0)
				cout<<"-1\n"; 
			else
				cout<<ans<<endl;
			continue;
		}
		ans = 0;
		if( x == 0) ans++;
    	ll p = arr[n / 2] - arr[0];
    	for(ll i = 0 ; i < n / 2 ; i++)
    	{
    		if(p > 0)
			{
				if((x >= arr[i]) && ( ( (x - arr[i]) % p) == 0 ) )
    				ans++;
    		}
    		else
			{
				if((x <= arr[i] )&& ( ( (arr[i] - x) % (-p) )== 0 ) )
					ans++;
    		}
    	}
    	cout<<ans<<endl;

    }
}
