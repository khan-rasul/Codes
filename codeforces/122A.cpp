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
bool islucky(ll n)
{
	while(n)
	{
		if(n%10 != 4 && n%10 != 7)
			return false;
		n/=10;
	}
	return true;
}
int main()
{
    //fast();
    ll n;
    cin>>n;
    bool flag = false;
    for(ll i = 1 ; i * i <= n ; i++)
    {
    	if(n % i == 0)
    	{
    		if(islucky(i) || islucky(n/i))
    		{
    			flag = true;
    			break;
    		}
    	}
    }
    cout<<(flag ? "YES\n" : "NO\n" );
    
}
