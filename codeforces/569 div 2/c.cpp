/*-----lusar98-----*/
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
int main()
{
    //fast();
    ll n,q;
    cin>>n>>q;
    deque<ll> foo(n);
    vector<pair<ll,ll> > bar;
    ll m=-1;
    for(ll i=0;i<n;i++)
    {
    	cin>>foo[i];
    	if(foo[i]>m)
    		m=foo[i];
    }
    for(ll i=0;i<n;i++)
    {
    	if(foo[0]==m)
    		break;
    	ll a=foo[0],b=foo[1];
    	foo.pop_front();foo.pop_front();
    	bar.pb({a,b});
    	foo.push_back(min(a,b));
    	foo.push_front(max(a,b));
    }
    while(q--)
    {
    	ll t;
    	cin>>t;
    	if(t<=bar.size())
    		cout<<bar[t-1].ff<<" "<<bar[t-1].ss<<endl;
    	else
    	{
    		t-=bar.size();
    		t--;
    		cout<<m<<" "<<foo[t%(n-1) + 1]<<endl;
    	}
    }    
}
