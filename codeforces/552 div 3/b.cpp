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
    ll k = *min_element(arr,arr+n) + *max_element(arr,arr+n);
    if(k%2) k = *max_element(arr,arr+n);
    else
    k/=2;
    ll diff = abs(k - *min_element(arr,arr+n));
    ll flag=0;
    for(ll i=1;i<n;i++)
    {
        if(arr[i]!=k && arr[i]+diff!= k && arr[i]-k!=diff)
        {
            flag=1;
            break;
        }
    }
    cout<<(flag?-1:diff);

}
