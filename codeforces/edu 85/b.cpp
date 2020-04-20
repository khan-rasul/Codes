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
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n, k;
    	cin>>n>>k;
    	ll arr[n];
    	ll  lcnt = 0 , mcnt = 0;
    	double ls = 0 , ms = 0 ;
    	for(ll i = 0 ; i < n ; i++ )
    	{
    		cin>>arr[i];
    		if(arr[i] >= k)
    		{
    			ms += arr[i];
    			mcnt++;
    		}
    	}
    	sort(arr , arr + n);
    	ll i;
    	for(i = 0 ; i < n && arr[i] < k ; i++ );
    	if(mcnt == 0)
    	{
    		cout<<0<<endl;
    		continue;
    	}
    	cerr<<i;
    	ls = 0; lcnt = 0;
    	while(i > 0 && (lcnt == 0 || ((ls + ms) / (lcnt + mcnt)) >= k))
    	{
    		ls += arr[--i];
    		lcnt++;
    	}
    	cout<<mcnt + ( ( (ls + ms) / (lcnt + mcnt)) >= k ? lcnt : lcnt - 1)<<endl;
    }
}
