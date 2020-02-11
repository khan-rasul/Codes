/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll int
#define mod 1000000007
#define inf (1ll<<60)
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
    	vector<pair<ll,pair<ll,ll> > > foo(n )  ;
    	for(ll i = 0 ; i < n ; i++ )
    	{
    		ll x , y;
    		cin>>x>>y;
    		foo[i] = {x + y , {x , y}};
    	}
    	sort(foo.begin() , foo.end());
    	ll x = 0 , y = 0 , flag = 1;
    	string s = "";
    	for(ll i = 0 ; i < n && flag; i++)
    	{
    		cerr<<x<<" "<<y<<endl;
    		while(x < foo[i].ss.ff)
    		{
    			x++;
    			s+="R";
    		}
    		while(y < foo[i].ss.ss)
    		{
    			y++;
    			s+="U";
    		}
    		if(x != foo[i].ss.ff || y != foo[i].ss.ss)
    			{flag = 0; break;}
    	}
    	if(flag)
    		cout<<"YES\n"<<s<<endl;
    	else cout<<"NO\n";
    }
}