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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        ll p=0,sum=0;
        for(ll i=0;i<n;i++)
        {
            p+=arr[i];
            if(p<0)
            {
                p=0;
            }
            else if(p>k)
            sum++;
        }
        cout<<sum<<endl;
    }
}
