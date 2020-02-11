/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf (1ll<<60)
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
    	ll n;
    	cin>>n;
    	ll flag = 1;
    	for(ll i = 2 ; i * i <= n && flag; i++)
    	{
    		if(n % i == 0)
    			for(ll j = 2 ; j * j <= (n / i) ; j++)
    			{
    				if((n / i) % j == 0)
    				{
    					if(i != j && j != (n / i / j) && i != (n / i / j))
    					{
    						cout<<"YES\n";
    						cout<<i<<" "<<j<<" "<<(n / i / j) <<endl;
    						flag = 0;
    						break;
    					}
    				}
    			}

    	}
    	if(flag) cout<<"NO\n";
    }
}
