/*-----lusar98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
using namespace std;
int main()
{
    //fast();
    ll arr[3], d;
    for(ll i=0;i<3;i++)
    	cin>>arr[i];
    cin>>d;
    sort(arr,arr+3);
    ll x= arr[1]-arr[0],y=arr[2]-arr[1];
    ll ans=0;
    if(x<d)
    {
    	ans+=(d-x);
    }
    if(y<d)
    {
    	ans+=(d-y);
    }
    cout<<ans;
}
