/*-----lusar98-----*/
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
    ll h,w;
    cin>>h>>w;
    string s[h];
    for(ll i=0;i<h;i++)
    	cin>>s[i];
    ll flag=0;
    for(ll i=1;i<h-1 && !flag;i++)
    {
    	for(ll j=1;j<w-1 && !flag;j++)
    	{
    		if(s[i][j]=='*')
    		{
    			if(s[i-1][j]=='*' && s[i+1][j]=='*' && s[i][j-1]=='*' && s[i][j+1]=='*')
    			{
    				s[i][j]='.';
    				flag=1;
    				for(ll p=i+1;p<h && s[p][j] == '*';p++)
    				{
    					s[p][j]='.';
    				}
    				for(ll p=i-1;p>=0 && s[p][j] == '*';p--)
    				{
    					s[p][j]='.';
    				}
    				for(ll p=j+1;p<w && s[i][p] == '*';p++)
    				{
    					s[i][p]='.';
    				}
    				for(ll p=j-1;p>=0 && s[i][p] == '*';p--)
    				{
    					s[i][p]='.';
    				}
    			}
    		}
    	}
    }
    if(flag==0)
    	cout<<"NO";
    else
    {
    	for(ll i=0;i<h;i++)
	    {
	    	for(ll j=0;j<w;j++)
	    		if(s[i][j]=='*')
	    		{
	    			cout<<"NO";
	    			return 0;
	    		}
	    		
	    }
	    cout<<"YES";
	}

}
