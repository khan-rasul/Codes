/*-----lusar98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
using namespace std;
int main()
{
    //fast();
    ll T;
    cin>>T;
    while(T--)
    {
    	ll n;
    	cin>>n;
    	ll arr[n],sum=0;
    	for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
    	ll k,x;
    	cin>>k>>x;
    	for(ll i=0;i<n;i++)
    	arr[i]=(arr[i]^x) -arr[i];
    	sort(arr,arr+n,greater<ll>() );
    	ll change =0;
    	if(k %2 )
    	{
    		if(k!=n)
	    		for(ll i=0;i<n;i++)
	    		{
	    			if(arr[i]>0)
	    				change+=arr[i];
	    			else
	    				break;
	    		}
    		else
    			for(ll i=0;i<n;i++)
    				change+=arr[i];
    		change = max(0ll,change);
    	}
    	else
    	{
    		ll temp =0;
    		if(k!=n)
    		{
    			for(ll i=0;i< (n-n%2);i+=2)
	    		{
	    			change+=arr[i]+arr[i+1];
	    			temp=max(temp,change);
	    		}
	    		change =temp;
	    	}
	    	else
    			for(ll i=0;i<n;i++)
    				change+=arr[i];
    		change = max(0ll,change);

    	}
    	cout<<sum+change<<endl;
    }
    
}
