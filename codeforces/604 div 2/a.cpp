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
    	string s;
    	cin>>s;
    	s="?"+s+"?";
    	for(ll i = 1 ; i < s.length() - 1 ; i++)
    	{
    		if(s[i] == '?' )
    		{
    			if(s[i-1] != '?' && s[i + 1] != '?' && s[i-1] != s[i + 1])
    			{
    				s[i] = 294 - s[i - 1] - s[i + 1];
    			}
    			else if(s[i - 1] == '?')
    			{
    				if(s[i + 1] == 'a')
    					s[i] = 'b';
    				else
    					s[i] = 'a';
    			}
    			else
    			{
    				if(s[i - 1] == 'a')
    					s[i] = 'b';
    				else
    					s[i] = 'a';
    			}
    		}
    	}
    	ll flag = 1;
    	for(ll i = 2 ; i < s.length() - 1 ; i++ )
    		if(s[i] == s[i - 1])
    		{
    			flag = 0;
    			break;
    		}
    	if(flag)
    	{
    		for(ll i = 1 ; i< s.length() - 1 ; i++ )
    			cout<<s[i];
    	}
    	else
    		cout<<"-1";
    	cout<<endl;
    }
}
