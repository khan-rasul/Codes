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
int main()
{
    //fast();
    ll q;
    cin>>q;
    while(q--)
    {
    	ll n;
    	cin>>n;
    	deque<ll> foo;
    	ll ans=0;
    	for(ll i=0;i<n;i++)
    	{
    		ll x;
    		cin>>x;
    		if(x%3==0)
    		{
    			ans++;
    		}
    		else
    			foo.pb(x%3);
    	}
    	sort(foo.begin(),foo.end());
    	ll one=0,two=0;
    	for(ll i=0;i<foo.size();i++)
    	{
    		if(foo[i]==1)
    			one++;
    		else
    			two++;
    	}
    	ans+=min(one,two);
    	ll temp=min(one,two);
    	one-=temp;
    	two-=temp;
    	ans+=one/3;
    	ans+=two/3;
    	cout<<ans<<endl;
    }
}
