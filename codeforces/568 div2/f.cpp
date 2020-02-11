/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll int
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
    ll n,m;
    cin>>n>>m;
    ll f[530]={0}, p[530]={0};
    vector<multiset< pair<ll,ll> > > foo(531);

    for(ll i=0;i<n;i++)
    {
    	ll x;
    	cin>>x;
    	ll num=0;
    	while(x--)
    	{
    		ll y;
    		cin>>y;
    		num|=(1<<( y - 1 ));
    	}
    	f[num]++;
    } 

    for(ll i=0;i<m;i++)
    {
    	ll x,c;
    	cin>>c>>x;
    	ll num=0;
    	while(x--)
    	{
    		ll y;
    		cin>>y;
    		num|=(1<<( y - 1 ));
    	}
    	p[num]++;
    	foo[num].insert({c,i+1});
    }

    vector<ll> match(1060,0);
    ll cost = mod, print =0;
    pair<ll , ll > store;

    for(ll i=1;i<=530;i++)
    {
    	if(p[i]!=0)
    	for(ll j=i;j<=530;j++)
    	{
    		if(( (i==j && p[i]>=2) || (i!=j)) && ( p[j] != 0) )
    		{
    			if(match[i|j] == 0)
    			{
    				ll ans=0;
    				for(ll k=1;k<=530;k++)
    				{
    					if(  ( k |(i|j)) == (i|j))
    						ans+=f[k];
    				}
    				match[i|j] =ans;
    			}
    			pair<ll,ll> ign;
    			ll temp;
    			if(i==j)
    			{
    				auto it=foo[i].begin();
    				temp=it->ff;
    				ign.ff= it->ss;
    				it++;
    				temp+=it->ff;
    				ign.ss = it->ss;
    			}
    			else
				{
					temp = (foo[i].begin())->ff + (foo[j].begin())->ff;
					ign = {(foo[i].begin())->ss , (foo[j].begin())->ss};
				}

    			if( match[i | j] > print)
				{
					print = match[i | j];
					cost = temp;
    				store = ign;
				}
    			else if(match[i | j] == print)
    			{
    				if(cost> temp)
    				{
    					cost = temp;
    					store = ign;
    				}
    			}
    		}
    	}
    }
    cout<<store.ff<<" "<<store.ss<<endl;
}
