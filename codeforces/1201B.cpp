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
    ll n ;
    cin>>n;
    ll arr[n],sum =0 ;
    for( ll i = 0 ; i < n ; i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	if(sum % 2 )
	{
		cout<<"NO\n";
		return 0;
	}
	if(*max_element(arr , arr + n) > sum/2 )
	{
		cout<<"NO\n";
		return 0;
	}
	cout<<"YES\n";
	return 0;
}
