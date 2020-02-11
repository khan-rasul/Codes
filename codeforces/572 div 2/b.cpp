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
    for(ll i=0 ;i < n ; i++)
    	cin>>arr[i];
    sort(arr,arr+n);
    swap(arr[n-1],arr[n-2]);
    ll flag =0;
    for(ll i = 1 ; i<n-1 ;i++)
    {
    	if(arr[i]>= arr[i-1] + arr[i+1])
    	{
    		flag =1;
    		break;
    	}
    }
    if(arr[0] >= arr[1] +arr[n-1])
    	flag=1;
    if(arr[n-1] >= arr[n-2] + arr[0]) flag=1;
    if(flag)
    	cout<<"NO\n";
    else
    {
    	cout<<"YES\n";
    	for(ll i =0 ;i <n;i++)
    		cout<<arr[i]<<" ";
    	cout<<endl;
    }
}
