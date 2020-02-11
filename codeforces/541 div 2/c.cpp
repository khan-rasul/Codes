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
    vector<ll> foo(n);
    for(ll i=0;i<n;i++)
        cin>>foo[i];
    sort(foo.rbegin(),foo.rend());
    ll arr[n]={0};
    ll k=(n-1)/2;
    ll p=k+1;
    for(ll i=0;i<n;i+=2)
    {
        arr[k--]=foo[i];
        if(p<n)
        arr[p++]=foo[i+1];
    }
    for(ll i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
