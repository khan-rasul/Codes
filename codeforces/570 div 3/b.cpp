/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
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
        for(ll i=0;i<n;i++) cin>>arr[i];
        ll foo[n][2];
        for(ll i=0;i<n;i++)
        {
            foo[i][0]=arr[i]-k;
            foo[i][1] = arr[i]+k;
        }
        ll l=foo[0][0], r = foo[0][1];
        for(ll i=1;i<n;i++)
        {
            l = max(l, foo[i][0]);
            r= min (r, foo[i][1]);
        }
        if(r<l)
            cout<<"-1\n";
        else
            cout<<r<<endl;
    }
}
