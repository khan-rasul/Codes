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
    ll freq[(ll)2e5 + 5]={0};
    ll op=0,num=-1;
    for( ll i=0;i<n;i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
        if(op<freq[arr[i]])
        {
            op=freq[arr[i]];
            num=i;
        }
    }
    ll ans=n-op;
    cout<<n-op<<endl;
    for(ll i=num-1;i>=0;i--)
    {
        if(arr[i]<arr[i+1])
        {
            cout<<"1 "<<i+1<<" "<<i+1+1<<endl;
            arr[i]=arr[i+1];
        }
        else if(arr[i]>arr[i+1])
        {
            cout<<"2 "<<i+1<<" "<<i+1+1<<endl;
        }
        arr[i]=arr[i+1];
    }
    for(ll i=num+1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            cout<<"1 "<<i+1<<" "<<i<<endl;
            arr[i]=arr[i+1];
        }
        else if(arr[i]>arr[i-1])
        {
            cout<<"2 "<<i+1<<" "<<i<<endl;
        }
        arr[i]=arr[i-1];
    }
}
