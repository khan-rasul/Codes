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
    ll arr[10]={0};
    for(ll i = 0 ; i< n ; i++)
    {
    	if(s[i] == 'L')
    	{
    		ll j;
    		for(j = 0 ; j< 10 && arr[j]; j++);
    		arr[j] = 1;
    	}
    	else if(s[i] == 'R')
    	{
    		ll j;
    		for(j = 9 ; j>=0 && arr[j]; j--);
    		arr[j] = 1;
    	}
    	else
    		arr[s[i] - '0'] = 0;
    }
    for(ll i = 0 ; i< 10 ; i++)
    	cout<<arr[i];
    
}
