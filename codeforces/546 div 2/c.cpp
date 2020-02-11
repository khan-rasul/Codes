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
    ll arr[n][m],brr[n][m];
    for(ll i=0;i<n;i++)
        for(ll j=0;j<m;j++)
        cin>>arr[i][j];
    for(ll i=0;i<n;i++)
        for(ll j=0;j<m;j++)
        cin>>brr[i][j];
        ll flag=0;
    for(ll i=0;i<(n+m-1);i++)
    {
        multiset<ll> a,b;
        ll k=i;
        if(i<m)
        for(ll j=min(i,n-1);j>=0;j--)
        {
            a.insert(arr[min(i,n-1)-j][k]);
            b.insert(brr[min(i,n-1)-j][k--]);
        }
        else

        {
            k=i-m;
            for(ll j=min(i-m,m-1);j>=0;j--)
        {
            a.insert(arr[n-1-k][m-1-(min(i-m,m-1)-j)]);
            b.insert(brr[n-1-k--][m-1-(min(i-m,m-1)-j)]);
        }}
        if(a!=b)
        {
            flag=1;
            break;
        }

    }
    cout<<(flag?"NO":"YES");
}
