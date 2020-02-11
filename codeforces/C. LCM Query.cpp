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
    ll n,m;
    cin>>n>>m;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    for(ll i=1;i<n;i++)
        arr[i]=(arr[i]*arr[i-1])/__gcd(arr[i],arr[i-1]);
    ll mini[n];
    mini[0]=arr[0];
    ll mi=arr[0];
    for(ll i=1;i<n;i++)
    {
        mi=min(arr[i],mi);
        mini[i]=mi;
    }
    /*while(m--)
    {
        ll x;
        cin>>x;
        cout<<mini[x-1]<<endl;
    }*/
    for(ll i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
