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
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    ll ans=arr[n-1];
    for(ll i=n-2;i>=0;i--)
    {
        if(arr[i]<arr[i+1])
            ans+=arr[i];
        else if( arr[i]>= arr[i+1])
        {
            arr[i]=arr[i+1]-1;
            arr[i]=max(arr[i],0ll);
            ans+=arr[i];
        }
    }
    cout<<ans<<endl;
}
