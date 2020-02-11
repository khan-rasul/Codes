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
    	ll n , m ,k;
    	cin>>n>>m>>k;
    	ll arr[n];
    	for(ll i = 0 ; i< n ; i++)
    		cin>>arr[i];
    	bool flag = true;
    	for(ll i = 1 ; i< n ; i++)
    	{
    		if(arr[i] <= arr[i - 1])
    		{
    			m+= (arr[i - 1]  - arr[i]);
    			m+= min(k , arr[i] );
    		}
    		else
    		{
    			if(arr[i] - arr[i-1] - m > k)
    			{
    				flag = false;
    				break;
    			}
    			else
    			{
    				if(arr[i] - arr[i-1] <= k)
    				{
    					m+= min(arr[i-1] , ( arr[i - 1]  - (arr[i] - k)) );
    				}
    				else
    				{
    					m-= (arr[i] - k - arr[i - 1]);
    				}
    			}
    		}
    		// cout<<m<<" ";
    	}
    	cout<< ( flag ? "YES" : "NO")<<endl;
    }
    
}
