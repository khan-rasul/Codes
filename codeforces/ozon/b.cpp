/*
* Fingers Crossed
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
    string s;
    cin>>s;
    vector<ll> pre , suf;
    ll l = 0 , r = s.length() - 1;
    while(l < r)
    {
    	while(l < r && s[l] != '(') l++;
    	while(l < r && s[r] != ')') r--;
    	if(l >= r) break;
    	pre.pb(l);
    	suf.pb(r);
    	l++; r--;
    }
    if(pre.size() == 0)
    {
    	cout<<"0\n";
    	return 0;
    }
    cout<<"1\n";
    cout<<pre.size() + suf.size()<<endl;
    for(ll x : pre)
    	cout<<x + 1<<" ";
    reverse(suf.begin() , suf.end());
    for(ll x : suf)
    	cout<<x + 1<<" ";
    cout<<endl;
}
