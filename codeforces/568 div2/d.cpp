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
    vector<pair<ll,ll> > arr(n);
    for(ll i=0;i<n;i++)
    {
    	cin>>arr[i].ff;
    	arr[i].ss=i+1;
    }
    sort(arr.begin(),arr.end());
    if(n<=5)
    {
    	if(n<=3)
    		cout<<n<<endl;
    	else if(n==4)
    	{
    		ll x=arr[1].ff-arr[0].ff;
    		ll y= arr[2].ff-arr[1].ff;
    		ll z=arr[3].ff-arr[2].ff;
    		if(x+y==z)
    		{
    			cout<<arr[1].ss<<endl;
    		}
    		else if(x== y+z)
    		{
    			cout<<arr[2].ss<<endl;
    		}
    		else if(x == y)
    			cout<<arr[3].ss<<endl;
    		else if(y == z)
    			cout<<arr[0].ss<<endl;
    		else
    			cout<<"-1\n";
    	}
    	else
    	{
    		ll x=arr[1].ff-arr[0].ff;
    		ll y= arr[2].ff-arr[1].ff;
    		ll z=arr[3].ff-arr[2].ff;
    		ll w=arr[4].ff-arr[3].ff;
    		if(y==z && z==w)
    			cout<<arr[0].ss<<endl;
    		else if(x+y == z && z==w)
    			cout<<arr[1].ss<<endl;
    		else if(x == y+z && x == w)
    			cout<<arr[2].ss<<endl;
    		else if(x== y && y == z+w)
    			cout<<arr[3].ss<<endl;
    		else if(x== y && y ==z)
    			cout<<arr[4].ss<<endl;
    		else
    			cout<<"-1\n";
    	}
    	return 0;
    }
    map<ll,ll> foo;
    for(ll i=1;i<n;i++)
    {
    	foo[arr[i].ff - arr[i-1].ff]++;
    }
    ll cd=0,m=0,p=0;
    for(auto it=foo.begin(); it!=foo.end();it++)
    {
    	p++;
    	if(it->ss >m)
    	{
    		m=it->ss;
    		cd=it->ff;
    	}
    }
    if(arr[1].ff - arr[0].ff !=cd)
    {
    	for(ll i=n-1;i>1;i--)
    	if(arr[i].ff != arr[n-1].ff - (n-1 -i)*cd )
    	{
    		cout<<"-1\n"<<endl;
    		return 0;
    	}
    	if(cd == arr[2].ff -arr[1].ff)
    		cout<<arr[0].ss<<endl;
    	else
    		cout<<arr[1].ss<<endl;
    	return 0;
    }
    for(ll i=1;i<n;i++)
    	if(arr[i].ff != arr[0].ff + i*cd )
    	{
    		if((i<n-1 && arr[i+1].ff == arr[0].ff + i*cd) || i==n-1 )
    		cout<<arr[i].ss<<endl;
    		else
    			cout<<"-1";
    		return 0;
    	}
    cout<<arr[0].ss<<endl;
}
