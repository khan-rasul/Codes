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
    ll n;
    cin >> n;
    vector< pair<ll ,ll > > foo;
    for(ll i = 0 ; i < n ; i ++ )
    {
    	ll a,b;
    	cin>>a>>b;
    	foo.pb({a-b,b*n-a});
    }
    sort(foo.begin(),foo.end());
    ll ans =0;
    for(ll i=0;i<n;i++)
    {
    	ans+=foo[i].ff*(n-i)+foo[i].ss;
    }
    cout<<ans<<endl;
}
