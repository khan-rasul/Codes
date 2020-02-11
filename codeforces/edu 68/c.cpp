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
    ll t ; 
    cin>>t;
    while(t--)
    {
    	string s,t,p;
    	cin>>s>>t>>p;
    	ll foo[27]={0},bar[27]={0};
    	ll last =0,cnt=0;
    	for(ll i =0 ; i <s.length() ; i++)
    	{
    		while(last< t.length() && t[last]!=s[i])
    		{
    			foo[t[last] - 'a']++;
    			last++;
    			cnt++;
    		}
    		last++;
    	}
    	while(last< t.length() )
    	{
    		foo[t[last++] - 'a']++;
    		cnt++;
    	}
    	if(s.length() + cnt != t.length() )
    	{
    		cout<<"NO\n";
    		continue;
    	}
    	for(ll i =0 ; i < p.length(); i++)
    		bar[p[i] - 'a']++;
    	ll flag =0;
    	for(ll i =0 ; i < 27 ;i++)
    	{
    		if(bar[i]<foo[i])
    		{
    			cout<<"NO\n";
    			flag= 1;
    			break;
    		}
    	}
    	if(!flag) cout<<"YES\n";
    }
}
