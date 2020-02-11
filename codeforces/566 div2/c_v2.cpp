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
	ll n;
	cin>>n;
	map< pair<ll,char> , vector<string> > foo;
	for(ll i=0;i<n;i++)
	{
		string s;
		cin>>s;
		ll v=0;
	 	char l;
		for(ll i=0;i<s.length();i++)
		{
	 		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
	 		{
	 			v++;
				l =s[i];
	 		}
	 	}
	 	foo[{v,l}].pb(s);
	}
	vector<pair<string,string> > save,bad;
	unordered_map<ll, vector<string> > extra;
	for(auto it=foo.begin();it!=foo.end();it++)
	{
		// cout<<it->ff.ff<< " "<<it->ff.ss<<endl;
		vector<string> temp = it->ss;
		ll flag=0;
		if(temp.size() %2)
	 		{extra[it->ff.ff].pb(temp.back() ); flag=1;}
	 	for( ll i=0;i < temp.size() - flag;i+=2)
	 		save.pb ( make_pair(temp[i],temp[i+1]) );
	}
	for(auto it=extra.begin();it!=extra.end();it++)
	{
		for(ll i=0;i<it->ss.size() - (it->ss.size() %2 );i+=2)
		{
			bad.pb({it->ss[i],it->ss[i+1]});
		}
	}
	ll ans=0;
	if(save.size()>bad.size())
		ans = (save.size() + bad.size()) /2;
	else
		ans = save.size();
	cout<<ans<<endl;
	while(ans && !bad.empty() && !save.empty())
	{
		cout<<bad.back().ff<<" "<<save.back().ff<<endl;
		cout<<bad.back().ss<<" "<<save.back().ss<<endl;
		bad.pop_back();
		save.pop_back();
		ans--;
	}
	while(ans && !save.empty())
	{
		cout<<save[save.size()-1].ff<<" "<<save[save.size()-2].ff<<endl;
		cout<<save[save.size()-1].ss<<" "<<save[save.size()-2].ss<<endl;
		save.pop_back();
		save.pop_back();
		ans--;
	}
}
