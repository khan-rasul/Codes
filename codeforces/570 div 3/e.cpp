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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    set<string> foo;
    queue<string> bfs;
    bfs.push(s);
    foo.insert(s);
    ll ans=0;
    while(!bfs.empty() && foo.size() < k )
    {
    	string v = bfs.front() ; bfs.pop();
    	for(ll i=0 ; i< v.length() ;i++)
    	{
    		string t = v;
    		t.erase(t.begin() + i);
    		if( !foo.count(t) && foo.size() < k)
    		{
    			bfs.push(t);
    			foo.insert(t);
    			ans += (n - t.length());
    		}
    	}
    }
    if(foo.size()  == k)
    cout<<ans<<endl;
	else
	cout<<"-1";
}
