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
    ll arr[n][2];
    for(ll i=0;i<n;i++)
        cin>>arr[i][0]>>arr[i][1];
    ll k;
    cin>>k;
    ll i;
    for( i=0;i<n && k>0;i++)
    {
        k-=(arr[i][1]-arr[i][0]+1);
    }
    cout<<n-i+1;
}
