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
int main()
{
    //fast();
    ll n , k;
    cin>>n>>k;
    string s[n];
    map<string, ll> foo;
    set<vector<ll>> bar;
    for(ll i = 0 ; i < n ; i++)
    	{cin>>s[i]; foo.insert({s[i] , i});}
    ll ans = 0;
    for(ll i = 0 ; i < n ; i++)
    {
    	for(ll j = i + 1 ; j < n ; j++)
    	{
    		string temp = "";
    		for(ll m = 0 ; m < k ; m++)
    		{
    			if(s[i][m] == s[j][m])
    				temp +=s[i][m];
    			else if('S' != s[i][m] && 'S' != s[j][m])
    				temp += 'S';
    			else if('E' != s[i][m] && 'E' != s[j][m])
    				temp += 'E';
    			else if('T' != s[i][m] && 'T' != s[j][m])
    				temp += 'T';
    		}
    		// cout<<temp<<" ";
    		if(foo.find(temp) != foo.end())
			{
				vector<ll> pop = {i , j , foo[temp]};
				sort(pop.begin() , pop.end());
				if(bar.count(pop) == 0)
				{
					ans++;
					bar.insert(pop);
				}
			}
    	}
    }
    cout<<ans<<endl;
    
}
