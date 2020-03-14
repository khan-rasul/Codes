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
    string s,t;
    cin>>s>>t;
    string ans = "abc";
    ll flag = 0;
    if(n == 1)
    {
    	do{
	   		string a = ans.substr(0,2) , b = ans.substr(1 , 2) ;
	   		if(s != a && s!= b  && t!=a && t!=b)
			{
				flag = 1;
				break;
			}
   		}while(next_permutation(ans.begin() , ans.end() ) );
    }
    else
   	do{
   		string a = ans.substr(0,2) , b = ans.substr(1 , 2) , c = ans.substr(2,1) + ans.substr(0,1);
   		if(s != a && s!= b && s!= c && t!=a && t!=b && t!=c)
		{
			flag = 1;
			break;
		}
		else if( s!= a && s!= b && t!= a && t!= b && s!= "aa" && s!="bb" && s!= "cc" && t!= "aa" && t!= "bb" && t!= "cc")
		{
			flag = 2;
			break;
		}

   	}while(next_permutation(ans.begin() , ans.end() ) );
   	
   	if(flag == 0)
   	{
   		cout<<"NO\n";
   	}
   	else
   	{
   		cout<<"YES\n";
   		if(flag == 1)
   		{
   			for(ll i = 0 ; i< n ; i++)
   		   		cout<<ans;
   		   	cout<<endl;
   		}
   		else
   		{
   			for(ll i = 0 ; i< 3 ;i++)
   			{
   				for(ll j = 0 ; j < n ; j++)
   					cout<<ans[i];
   			}
   			cout<<endl;
   		}
   	}
}
