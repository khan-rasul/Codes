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
    fast();
    ll n;
    cin>>n;
    ll q[n],p[n];
    ll sum=0;
    for(ll i=1;i<n;i++)
    {
        cin>>q[i];
        sum+=q[i];
    }
    p[0]=0;
    for(ll i=1;i<n;i++)
    {
        p[i]=q[i]+p[i-1];
    }
    ll m=*min_element(p,p+n);
    for(ll i=0;i<n;i++)
    {
        p[i]=p[i]+abs(m)+1;
    }
    ll arr[n];
    for(ll i=0;i<n;i++) arr[i]=p[i];
    sort(arr,arr+n);
    ll flag=0;
    for(ll i=0;i<n;i++)
    {
        if(arr[i]!=i+1)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        for(ll i=0;i<n;i++)
            cout<<p[i]<<" ";
    }
    else
        cout<<"-1";

}
