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
    	ll n;
    	cin>>n;
    	ll arr[n + 1];
    	for(ll i = 1 ; i <= n ; i++)
    	{
    		cin>>arr[i];
    	}
    	ll k = n/2 , i;
    	for(i = 2 ; i < n ; i++)
    		if(arr[i] != arr[i - 1])
    			break;
    	ll g = i - 1;
    	if( (k % 3 == 0 && g >= k/3 ) || (k % 3 == 2 && g > k/3 ) || (k % 3 == 1 && g >= k/3 ) )
    	{
    		cout<<"0 0 0"<<endl;
    		continue;
    	}
    	while((i - 1) <= 2 * g && i < n)
	    	for( i = i + 1; i < n ; i++)
	    		if(arr[i] != arr[i - 1])
	    			break;
	    if( i > k)
	    {
	    	cout<<"0 0 0"<<endl;
    		continue;
	    }
	    ll s = i - g - 1;
	    ll b = k;
	    while( b >= i && arr[b] == arr[b + 1])
	    	b--;
	    if( arr[b] == arr[b + 1])
	    {
	    	cout<<"0 0 0"<<endl;
    		continue;
	    }
	    b = b - i + 1;	
	    if( b <= g)
	    {
	    	cout<<"0 0 0"<<endl;
    		continue;
	    }
	    else
	    {
	    	cout<<g<<" "<<s<<" "<<b<<endl;
	    }
    }
}
