/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf 1ll<<60
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
    	ll x , y;
    	cin>>x>>y;
    	if(x >= y)
    	{
    		cout<<"YES\n";
    		continue;
    	}
    	ll flag = 1;
    	if(x == 1)
    	{
    		flag = 0;
    	}
    	else
    	{
    		if(x == 2 && y > 3)
    		flag = 0;
    		if(x == 3) flag = 0;
    	}
    	cout<<(flag ? "YES" : "NO") <<endl;
    }
}
