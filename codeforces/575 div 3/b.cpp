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
    	ll n ,k ;
    	cin>>n>>k;
    	k--;
    	ll arr[n];
    	for(ll i =0 ; i < n ;i++)
    	{
    		cin>>arr[i];
    	}
    	ll flag =0;
    	vector<ll> part;
    	ll v =0;
    	for(ll i =0 ; i< n && k; i++)
    	{
    		if(arr[i] % 2 )
    		{
    			v++;
    		}
    		if(v % 2)
    		{
    			part.pb(i);
    			v = 0;
    			k--;
    		}
    	}
    	
    	if(k == 0)
    	{
    		v =0;
    		for(ll i = (part.empty() ? -1 :part.back()) + 1 ; i < n ; i++)
    		{
    			if(arr[i] % 2) v++;
    		}
    		if(v % 2 == 0) flag = 1;
    	}
    	else flag =1;
    	if(flag)
    	{
    		cout<<"NO\n";
    	}
    	else
    	{
    		cout<<"YES\n";
    		part.pb(n-1);
    		for(ll i =0 ; i < part.size() ; i++)
    			cout<<part[i] + 1<<" ";
    		cout<<endl;
    	}
    }
}
