/*-----lusar98-----*/
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
    	ll arr[n];
    	for(ll i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	sort(arr,arr+n);
    	ll x=0,y=n-1;
    	set<ll> foo;
    	while(x<=y)
    	{
    		foo.insert(arr[x]*arr[y]);
    		x++;
    		y--;
    	}
    	if(foo.size()>1)
    		{
    			cout<<"-1\n";
    			continue;
    		}
    	ll ans=0;
    	for(ll i=2;i*i<=*foo.begin();i++)
    	{
    		if(*foo.begin() % i==0)
    			ans+=2;
    	}
    	if(pow( (ll) sqrt(*foo.begin()), 2) ==*foo.begin())
    		ans--;
    	if(ans==n)
    		cout<<*foo.begin()<<endl;
    	else
    		cout<<"-1\n";
    }
    
}
