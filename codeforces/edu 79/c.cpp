/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf 1ll<<60
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
    	ll n , m;
    	cin>>n>>m;
    	ll arr[n] , brr[m];
    	for(ll i = 0 ; i < n ; i++)
    		cin>>arr[i];
    	for(ll i = 0 ; i < m ; i++)
    		cin>>brr[i];
    	set<ll> foo;
    	ll ans = 0, p = 0;
    	for(ll i = 0 ; i < m ; i++)
    	{
    		if(foo.count(brr[i]))
    			{ans++; foo.erase(brr[i]);}
    		else
    		{
    			while(arr[p] != brr[i] )
				{
					foo.insert(arr[p]);
					p++;
				}
				p++;
				ans += 2 * foo.size() + 1;
    		}
    	}
    	cout<<ans<<endl;
    }
}
