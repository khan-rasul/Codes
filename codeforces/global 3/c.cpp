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
    vector<ll>  arr(n+1);
    arr[0] =0;
    for(ll i=1;i<=n;i++)
	{
		cin>>arr[i];
		
	}
	//sort(arr.begin(),arr.end());
    vector< pair<ll,ll> > steps;
    for(ll i=1;i<=n; i++)
    {
    	if(arr[i]!=i)
    	{
    		if(arr[i] <= n/2 && i <= n/2)
    	    	{
    	    		steps.pb({i,n});
    	    		steps.pb({n,arr[i]});
    	    		steps.pb({i ,n});
    	    		swap(arr[i], arr[arr[i]]); 
    	    	}
    	    	else if( arr[i]>n/2 && i> n/2)
    	    	{
    	    		steps.pb({i,1});
    	    		steps.pb({1,arr[i]});
    	    		steps.pb({i ,1});
    	    		swap(arr[i], arr[arr[i]]); 
    	    	}
    	    	else if(arr[i] <= n/2 && i > n/2)
    	    	{
    	    		if(arr[i]==1)
    	    		{
    	    			steps.pb({i,1});
    	    			swap(arr[i], arr[arr[i]]); 
    	    			continue;	
    	    		}
    	    		steps.pb({i,1});
    	    		steps.pb({1,n});
    	    		steps.pb({n,arr[i]});
    	    		steps.pb({1 ,n});
    	    		steps.pb({i,1});
    	    		swap(arr[i], arr[arr[i]]); 
    	    	}
    	    	else if(arr[i] > n/2 && i <= n/2)
    	    	{
    	    		if(arr[i]==n)
    	    		{
    	    			steps.pb({i,n});
    	    			swap(arr[i], arr[arr[i]]); 
    	    			continue;	
    	    		}
    	    		steps.pb({i,n});
    	    		steps.pb({1,n});
    	    		steps.pb({1,arr[i]});
    	    		steps.pb({1 ,n});
    	    		steps.pb({i,n});
    	    		swap(arr[i], arr[arr[i]]); 
    	    	}
    	    }
    }
    // for(ll i=0;i<=n;i++)
    // 	cout<<arr[i]<<" ";
    cout<<steps.size()<<endl;
    for(ll i=0;i<steps.size();i++)
    	cout<<steps[i].ff<<" "<<steps[i].ss<<endl;
}
