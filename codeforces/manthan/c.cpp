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
    ll arr[n][n];
    ll v = 0,flag = 1 , e = 1;
    for(ll i = 0 ; i < n ; i++)
    {
    	if(flag)
    	for(ll j = 0 ; j < n ; j++)
    		{arr[i][j] = e; e+=2;}
    	else
    		for(ll j = 0; j  < n ; j++)
    			{arr[i][j] = v; v+=2; }
    	flag = 1- flag;
    }
    for(ll i = 0 ; i < n ; i++)
    {
    	for(ll j = 0 ; j< n ; j++)
    		cout<<arr[i][j]<<" ";
    	cout<<endl;
    }
}
