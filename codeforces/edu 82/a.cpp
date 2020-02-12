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
    ll t ;
    cin>>t;
    while(t--)
    {
    	string s;
    	cin>>s;
    	ll x = 0 , ans = 0;
    	for(ll i = 0 ; i < s.length() ; i++ )
    	{
    		if((s[i] == '0') && (x > 0))
			{
				ans++;
				x++;
				// cerr<<" hi ";
			}
    		else if(s[i] == '1') x = 1;
    		// cout<<s[i];

    	}
    	// cout<<endl;
    	// cout<<x<<" "<<ans<<" ";
    	cout<<ans - x + (x > 0 ? 1 : 0 )<<endl;
    }
    
}
