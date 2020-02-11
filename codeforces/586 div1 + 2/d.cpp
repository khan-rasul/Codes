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
    ll arr[n];
    ll odd = 0 , even = 0;
    for(ll i = 0 ; i < n ; i++)
    {
    	cin>>arr[i];
    	(arr[i] % 2) ? odd++ ; even++;
    }
    if(odd > even)
    {
    	cout<<even<<endl;
    	for(ll i = 0 ; i < n ; i++)
    	{
    		if(arr[i] % 2 == 0)
    			cout<<arr[i]<<" ";
    	}
    	cout<<endl;
    	return 0;
    }
    
}
