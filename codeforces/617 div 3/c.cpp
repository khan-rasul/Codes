/*
* All my senses intensify
* Whenever you and I, we dive
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
    	ll n;
    	cin>>n;
    	string s;
    	cin>>s;
    	map<pair<ll,ll> , ll> foo;
    	pair<ll,ll> x = {0,0} , ans = {-1 , inf};
    	foo.insert({x , -1});
    	for(ll i = 0 ; i < n ; i++ )
    	{
    		if(s[i] == 'L')
    			x.ff--;
    		else if(s[i] == 'R')
    			x.ff++;
    		else if(s[i] == 'U')
    			x.ss++;
    		else if(s[i] == 'D')
    			x.ss--;
    		if(foo.count(x))
    		{
    			if( (i - foo[x]) < (ans.ss - ans.ff))
    				ans = {foo[x] + 1 , i};
    			foo[x] = i;
    		}
    		else
    			foo.insert({x , i});
    	}
    	if(ans.ff == -1)
    	{
    		cout<<"-1\n";
    	}
    	else
    	{
    		cout<<ans.ff + 1<<" "<<ans.ss + 1<<endl;
    	}
    }
}
