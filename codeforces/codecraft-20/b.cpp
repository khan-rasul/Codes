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
int main()
{
    // fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	string s;
    	cin>>s;
    	string ans = s;
    	ll val = 1;
    	string temp = s;
    	string part = "";
    	for(ll i = 1 ; i <= n ; i++ )
    	{
    		string chk = part;
    		if(((n & 1) ^ (i & 1)) == 0)
    		{
    			reverse(chk.begin() , chk.end());
    		}
    		chk = temp + chk;
    		if(chk < ans)
    		{
    			ans = chk;
    			val = i;
    		}
    		part += s[i - 1];
    		temp.erase(0 , 1);
    	}
    	cout<<ans<<endl<<val<<endl;
    }

}
