/*-----lusar98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 998244353 
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
bool compare(pair<ll,ll> a, pair<ll,ll> b)
{
	if(a.ff> b.ff)
		return true;
	else if( a.ff == b.ff && a.ss>b.ss)
		return true;
	return false;
}
int main()
{
    //fast();
    ll n;
    cin>>n;
    vector<pair<ll,ll> > foo(n);
    for(ll i=0;i<n;i++)
    {
    	cin>>foo[i].ff;
    	foo[i].ss=i;
    }
    ll brr[n];
    for(ll i=0;i<n;i++)
    {
    	cin>>brr[i];
    }
    sort(foo.begin(), foo.end(),compare);
    sort(brr,brr+n);
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
    	foo[i].ff*=brr[i];
    	arr[foo[i].ss]=(foo[i].ff % mod);
    }
    ll pref[n]={0};
    pref[0]=arr[0];
    for(ll i=1;i<n;i++)
    {
    	pref[i]=(pref[i-1]+arr[i])%mod;
    }
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
    	ans+=pref[i];
    	ans%=mod;
    }
    ll print=ans;
    ll pre=ans;
    for(ll i=1;i<n;i++)
    {
 		pre = pre - ((n-i+1)*arr[i-1]) % mod + mod ;
 		pre=(pre+mod)%mod;
    	print+=pre;
    	print%=mod;
    }
    cout<<print;
}