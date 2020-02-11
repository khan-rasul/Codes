/*-----rk_98-----*/
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
    //fast();
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll cnt = 0;
    for(ll i = 0 ; i < n ; i++ )
    	if(islower(s[i]) || isupper(s[i])) cnt++;
    cout<<cnt<<endl;
    if(cnt + cnt > n )
    	cout<<"I LOVE YOU!\n";
    else
    	cout<<"I DON'T LOVE YOU!\n";
}
