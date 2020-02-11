/*
* Look in my eyes, what do you see?
* The cult of personality
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
ll n , m;
ll arr[300033][10];
pair<ll,ll> ans;
bool check(ll x)
{
	set<ll> masks;
	vector<pair<ll,ll>> vmask;
	for(ll i = 0 ; i < n ; i++ )
	{
		ll temp = 0;
		for(ll j = 0 ; j < m ; j++ )
			if(arr[i][j] >= x)
				temp |= (1 << j);
		if(!masks.count(temp))
		{
			masks.insert(temp);
			vmask.pb({temp , i});
		}
	}
	for(ll i = 0 ; i < vmask.size() ; i++ )
	{
		for(ll j = i ; j < vmask.size() ; j++ )
			if((vmask[i].ff | vmask[j].ff) == ((1<<m) - 1))
			{
				ans = {vmask[i].ss , vmask[j].ss};
				return true;
			}
	}
	return false;
}
int main()
{
    // fast();
    cin>>n>>m;
    for(ll i = 0 ; i < n ; i++ )
    {
    	for(ll j = 0 ; j < m ; j++ )
    		cin>>arr[i][j];
    }
    ll l = 0 , h = mod , mid = l , pre = -1;
    while(l < h && mid != pre)
    {
    	pre = mid;
    	mid = (l + h) / 2;
    	if(check(mid))
    		l = mid;
    	else
    		h = mid;
    }
    check(h);
    cout<<ans.ff + 1<<" "<<ans.ss + 1<<endl;
}
