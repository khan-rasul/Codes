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
    ll arr[]={100,20,10,5,1};
    ll ans=0;
    for(ll i=0;i<5 && n;i++)
    {
        ans+=n/arr[i];
        n%=arr[i];
    }
    cout<<ans<<endl;
}
