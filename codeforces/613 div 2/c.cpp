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
ll lcm( ll a , ll b)
{
	return a * ( b / __gcd(a , b) ); 
}
int main()
{
    //fast();
    ll x;
    cin>>x;
    ll a = 1 , b = x , m = x;
    for(ll i = 1 ; i * i <= x ; i++)
    {
    	if(x % i == 0)
    	{
    		if(lcm( i , x / i) == x)
    		{
    			if(m > max( i , x/i))
    			{
    				m = max( i , x / i);
    				a = i ; b = x / i;
    			}
    		}
    	}
    }
    cout<<a<<" "<<b<<endl;
    
}
