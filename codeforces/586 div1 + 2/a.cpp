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
    ll n;
    cin>>n;
    string s;
    cin>>s;
   	ll zero = 0, one = 0;
   	for(ll i = 0 ; i < n ; i++)
   	{
   		if(s[i] == 'z') zero++;
   		if(s[i] == 'n') one++;
   	}
   	for(ll i = 0 ; i < one ; i++)
   	{
   		cout<<"1 ";
   	}
   	for(ll i = 0 ; i < zero ; i++)
   		cout<<"0 ";
   	cout<<endl;
}
