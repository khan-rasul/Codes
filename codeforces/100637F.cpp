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
    ll n ;
    cin>>n;
    ll arr[n+3]={0};
    for(ll i =1 ; i <= n ; i++)
    {
    	cin>>arr[i];
    }
    ll m = *max_element(arr,arr+n+3);
    ll flag =0,cnt=0;
    for(ll i =1 ; i <= n ; i++)
    {
    	if( arr[i] == m)
    	{
    		ll a= arr[i] -arr[i-1] , b = arr[i] -arr[i+1];
    		if(i == 1)
    		{
    			if(b>=3)
    				flag=1;
    		}
    		else if(i==n)
    		{
    			if(a>=3)
    				flag=1;
    		}
    		else if((a >= 3 && b >= 1 ) || ( b >= 3 && a >= 1))
    			flag =1;
    		cnt++;
    	}
    }
    cout<<cnt*m - flag * m<<endl;
}
