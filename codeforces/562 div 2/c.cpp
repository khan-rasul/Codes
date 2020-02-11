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
ll n,m;
ll steps(ll a,ll b)
{
	if(b>a)
		return b-a;
	else
		return m-a + b;
}
int main()
{
    //fast();
    cin>>n>>m;
    ll arr[n],p[n]={0};
    for(ll i=0;i<n;i++)
    	cin>>arr[i];
    for(ll i=1;i<n;i++)
    {
    	if(arr[i]<arr[i-1])
    	{
    		if( steps( arr[i-1] , arr[i] ) < steps( arr[i-1] , arr[i] ) )
    		{
    			p[i-1]
    		}
    	}
    }
}
