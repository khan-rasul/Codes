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
    sort(arr,arr+n);
    ll p=0;
    ll ans=0,diff=0,beg=arr[p];
    for(ll i=1;i<n;i++)
    {
        diff=arr[i]-arr[p];
        while(diff>5)
        {
            p++;
            diff=arr[i]-arr[p];
        }
        if(diff<=5)
        {
            ans=max(ans,i-p+1);
        }
    }
    cout<<(ans?ans:1);

}
