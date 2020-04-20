/*
* I'm a Ghost
* Now you see me, now you don't
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
    ll n , m;
    cin>>n>>m;
    vector<ll> foo(m);
    ll sum = 0;
    for(ll i = 0 ; i < m ; i++)
    {
    	cin>>foo[i];
    	sum += foo[i];
    }
    if(sum < n)
    	return cout<<"-1\n" , 0;
    ll ans[m];
    for(ll i = 0 ; i < m ; i++ )
    {
    	if(sum > n)
    	{
    		ll temp = min(foo[i] - 1 , sum - n);
    		ans[i] = foo[i] - temp;
    		sum -= temp;
    	}
    	else
    		ans[i] = foo[i];
    }
    ll temp = ans[0] , flag = 1;
    ans[0] = 1;
    for(ll i = 1 ; i < m ; i++)
    {
    	temp += ans[i];
    	ans[i] = temp - ans[i] + 1;
    	if(ans[i] + foo[i] - 1> n)
    		flag = 0;
    }
    if(!flag)
    {
    	cout<<"-1\n";
    	return 0;
    }
    for(ll i = 0 ; i < m ; i++ )
    	cout<<ans[i]<<" ";
}
