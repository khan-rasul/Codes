/*
* You had no aura, I had no wings
* You had your troubles and I had my things
*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf ((ll)1e18)
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
int main()
{
    // fast();
    ll n;
    cin>>n;
    ll sum = 0;
    ll arr[n];
    map<ll,ll> foo , bar;
    for(ll i = 0 ; i < n ; i++ )
    {
    	cin>>arr[i];
    	if(!foo.count(arr[i]))
    		foo[arr[i]] = i;
    	bar[arr[i]] = i;
    	sum += arr[i];
    }
    if(sum % 2)
    {
    	cout<<"NO\n";
    	return 0;
    }
    sum /= 2;
    ll part = 0 , flag = 0;
    for(ll i = 0 ; i < n ; i++ )
    {
    	part += arr[i];
    	if(part > sum)
    	{
    		if(foo.count(part - sum) )
    		{
    			if(foo[part - sum] < i )
    			{
    				flag = 1;
    				break;
    			}
    		}
    	}
    	else if(part == sum)
    	{
    		flag = 1;
    		break;
    	}
    	else
    	{
    		if(bar.count(sum - part))
    			if(bar[sum - part] > i)
    			{
    				flag = 1;
    				break;
    			}
    	}
    }
    cout<<(flag? "YES\n" : "NO\n");

}
