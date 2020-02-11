/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf 1ll<<60
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
int main()
{
    //fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll r , g , b;
    	cin>>r>>g>>b;
    	if((r > g + b + 1) ||( g > r + b + 1) || (b > r + g + 1))
    		cout<<"No";
    	else
    		cout<<"Yes";
    	cout<<endl;
    }
}
