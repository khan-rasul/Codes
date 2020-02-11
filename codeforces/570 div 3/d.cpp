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
bool compare(pair<ll,ll> a , pair<ll,ll> b)
{
    if(a.ss>b.ss)
        return true;
    else if(a.ss== b.ss && a.ff>b.ff)
        return true;
    return false;
}
int main()
{
    //fast();    
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	map<ll,pair<ll,ll> > foo;
    	for(ll i=0;i<n;i++)
    	{
    		ll x,y;
    		cin>>x>>y;
    		foo[x] = {foo[x].ff +1, foo[x].ss + y };
    	}
    	vector<pair<ll,ll>> data;
    	for(auto it=foo.begin();it!=foo.end();it++)
		{
			data.pb(it->ss);
		}
    	ll sum=0,p;
    	sort(data.begin(),data.end(),compare);
    	sum=data[0].ff; p=data[0].ff;
        ll num=data[0].ss;
        set<ll> bar;
        bar.insert(data[0].ff);
    	for(ll i =1;i<data.size() && p>0;i++)
    	{
    		if(bar.find(data[i].ff) == bar.end())
                p = data[i].ff;
            else
            {
                auto it = lower_bound(bar.begin(),bar.end(),data[i].ff);
                it--;
                p = *it;
            }
            sum+=p;
            num+=(min(p,data[i].ss));
    	}
    	cout<<sum<<" "<<num<<endl;
    }
}
