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
    vector<ll> foo = {0,1,2,3,4};
    vector<string> q;
    for(ll i =0 ; i < 5; i++)
    {
    	string s;
    	cin>>s;
    	q.pb(s);
    }
    ll flag;
    do{
    	flag =0;
    	for(ll i =0 ; i < 5 && !flag; i++)
    	{
    		ll a = q[i][0] - 'A';
    		ll b = q[i][2] - 'A';
    		if(q[i][1] == '<')
    		{
    			for(ll j =4 ; j >=0 ;j--)
    			{
    				if(foo[j] == a)
    				{
    					flag =1;
    					break;
    				}
    				if(foo[j] == b)
    				{
    					flag =0;
    					break;
    				}
    			}
    		}
    		else
    		{
    			for(ll j =4 ; j >=0 ;j--)
    			{
    				if(foo[j] == b)
    				{
    					flag =1;
    					break;
    				}
    				if(foo[j] == a)
    				{
    					flag =0;
    					break;
    				}
    			}
    		}
    	}
    	if(flag == 0 )
    		break;
    }while(next_permutation(foo.begin(), foo.end() ));
    if(!flag)
	    for(ll i =0 ; i<5 ;i++)
	    	cout<<(char)('A' + foo[i]);
    else
    	cout<<"impossible";
}
