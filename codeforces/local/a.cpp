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
int main()
{
    // fast();
    string s;
    cin>>s;
    ll ans = 0;
    for(ll i = 0 ; i < s.length() ;i++)
    	if(islower(s[i])) ans++;
    cout<<ans<<endl;
}
