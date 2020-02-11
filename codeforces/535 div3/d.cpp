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
    ll ans=0;
    map<char, ll > foo = { {'R' , 1}, {'G', 2}, {'B',3}};
    char p[] = {'R', 'G', 'B'};
    for(ll i= 1 ;i<n-1;i++)
    {
    	if(s[i]==s[i-1])
    	{
    		if(s[i-1] == s[i+1])
    		{
    			if(s[i+1] == 'R')
    				s[i]='G';
    			else if( s[i+1] == 'G')
    				s[i] = 'B';
    			else s[i] ='R';
    		}
    		else
    		{
    			s[i] = p[ 5 - (foo[s[i-1]] + foo[ s[i+1 ] ]) ];
    		}
    		ans++;
    	}
    }
    if(s[n-1] == s[n-2])
    {
    	ans++;
    	if(s[ n-2 ] == 'R')
			s[n-1]='G';
		else if( s[n-2] == 'G')
			s[n-1] = 'B';
		else s[n-1] ='R';
    }
    cout<<ans<<endl;
    cout<<s<<endl;
}
