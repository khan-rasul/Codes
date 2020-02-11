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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<pair<char, ll>> foo(n + 1);
    string ans = "0";
    foo[0] = {s[0] , 0 };
    for(ll i = 1 ; i < n ; i++ )
    {
    	ll j = i - 1 , x = foo[j].ss;
    	if(s[i] < foo[j].ff )
    	{
    		x = 1 - x;
    	}
    	while(foo[j].ff > s[i])
    	{
    		if(x + foo[j].ss != 1)
    		{
    			cout<<"NO\n";
    			return 0;
    		}
    		foo[j + 1] = foo[j];
    		j--;
    	}
    	foo[j + 1] = {s[i] , x };
    	ans += (char)(x + '0');
    } 
    cout<<"YES\n";
    cout<<ans<<endl;
   
}
