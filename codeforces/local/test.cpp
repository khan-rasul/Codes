/*
* Look in my eyes, what do you see?
* The cult of personality
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
ll arr[10] , ans =0;
void solve(ll x , ll s)
{
	if(s % 3 == 0) { ans++;}
	if(x >= 9) return;
	solve(x + 1, s);
	solve(x + 1, s + arr[x]);
}
int main()
{
    // fast();
    ll n;
    cin>>n;
    for(ll i = 0 ; i < n ; i++)
    	cin>>arr[i];
    solve(0 , 0);
    cout<<ans<<endl;
}
