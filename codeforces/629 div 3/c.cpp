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
    	ll n;
    	string s;
    	cin>>n>>s;
    	string a = "" , b = "";
    	// cin>>a>>b;
    	ll flag = 0;
    	for(ll i = 0 ; i < n ; i++ )
    	{
    		if(flag)
    		{
    			a += "0";
    			b += s[i];
    		}
    		else
    		{
    			if(s[i] == '2')
    				a += "1" , b += "1";
    			else if( s[i] == '0')
    				a += "0" , b += "0";
    			else if(s[i] == '1')
    			{
    				a += "1";
    				b += "0";
    				flag = 1;
    			}

    		}
    	}
    	cout<<a<<endl<<b<<endl;
    }
}
