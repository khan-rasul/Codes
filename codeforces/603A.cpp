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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans = 0 , plus = 0;
    char c = '#';
    for(ll i = 0 ; i < n ; i++)
    {
    	if(s[i] != c)
    	{
    		ans++;
    		c = s[i];
    	}
    	if(i > 0)
    	{
    		if(s[i] == s[i - 1])
    			plus++;
    	}
    }
    cout<<ans + min(2ll , plus) <<endl;    
}
