/*
* I'm a Ghost
* Now you see me, now you don't
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
    ll n , m , k;
    cin>>n>>m>>k;
    ll chk[k][4];
    ll mx = 0 , my = 0;
    for(ll i = 0 ; i < k ; i++)
    {
    	ll x , y;
    	cin>>x>>y;
    	chk[i][0] = x;
    	chk[i][1] = y;
    	mx = max(mx , x);
    	my = max(my , y);
    }
    vector<pair<ll,ll>> foo(k);
    for(ll i = 0 ; i < k ; i++ )
    {
    	ll x , y;
    	cin>>x>>y;
    	foo[i].ff = x;
    	foo[i].ss = y;
    }
    sort(foo.begin() , foo.end());
    ll vis[k] = {0};
    string s = "";
    while(mx-- > 1 ) s += "U";
    while(my-- > 1) s += "L";
  	mx = 1 ; my = 1;
    for(ll i = 0 ; i < k ; i++ )
    {
    	ll x = foo[i].ff - mx, xx = x;
    	ll y = foo[i].ss - my, yy = y;
    	mx = foo[i].ff;
    	my = foo[i].ss;
    	while(xx > 0) s += "D" , xx--;
    	while(yy > 0) s += "R" , yy--;
    	while(xx < 0) s += "U" , xx++;
    	while(yy < 0) s += "L" , yy++;
    }
    // if(s.size() > 2 * n * m) cout<<"-1\n";
    // else
    cout<<s.size()<<endl<<s<<endl;
}
