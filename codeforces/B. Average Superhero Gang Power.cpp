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
    ll n,m,k;
    cin>>n>>k>>m;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {cin>>arr[i];}
    sort(arr,arr+n);
    for(ll i=1;i<n;i++)
    arr[i]+=arr[i-1];
    double ans=0;
    for(ll i=0;i<n && i<=m;i++)
    {
        double temp=arr[n-1];
        if(i)
            temp-=arr[i-1];
        temp+=min((n-i)*k,m-i);
        temp/=(n-i);
        ans=max(ans,temp);
    }
    cout.precision(9);
    cout.setf(ios::fixed,ios::floatfield);
    cout<<(double)ans;
}
