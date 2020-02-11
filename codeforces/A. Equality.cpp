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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll arr[26]={0};
    for(ll i=0;i< n;i++)
        arr[s[i]-'A']++;
    ll count=0,min=mod;
    for(ll i=0;i<26;i++)
    {
        if(arr[i])
        {
            if(min>arr[i])
                min=arr[i];
            count++;
        }
    }
    if(count==k)
    cout<<min*count;
    else
        cout<<0;
}
