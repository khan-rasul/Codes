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
const ll nax = (ll)5e5 +5;
ll nxt[nax] = {0};
int main()
{
    fast();
    ll n, m;
    cin>>n>>m;
    vector<pair<ll,ll> > foo(n);
    for(ll i =0 ;i < n; i++)
    	cin>>foo[i].ff>> foo[i].ss;
    sort(foo.begin() , foo.end());
    ll  x= 0;
    ll last = -1,index =-1;
    for(ll i =0 ; i < nax ;i++)
    {
    	while(x<n && foo[x].ff == i)
    	{
    		if(last<= foo[x].ss)
			{
				last = foo[x].ss;
				index = x;
			}
			x++;
    	}
    	nxt[i] = (last> i ? index:-1);
    }
    ll logn = ceil(log2(n));
    ll up[n][logn + 1];
    for(ll i = 0 ; i<n; i++)
	{
		up[i][0] = nxt[foo[i].ss];
	}
    for(ll j = 1 ; j<=logn ;j++)
    {
    	for(ll i =0 ; i<n;i++)
    	{
    		if(up[i][j-1] == -1)
    			up[i][j] = -1;
    		else
    			up[i][j] = up[ up[i][j-1] ][j-1];
    	}
    }
    while(m--)
    {
    	ll x,y;
    	cin>>x>>y;
    	ll l = nxt[x];
    	ll ans =1;
    	if(l==-1)
    		{cout<<"-1\n"; continue;}
    	for(ll i  =logn ; i>=0 ; i--)
    	{
    		if(up[l][i]!=-1 && foo[up[l][i]].ss < y)
			{
				l = up[l][i];
				ans+=((1<<i));
			}
    	}
    	if( foo[l].ss>= y )
    	cout<<ans<<endl;
    	else if(up[l][0] == -1)
    		cout<<"-1\n";
    	else
    		cout<<ans+1<<endl;
    }
}
