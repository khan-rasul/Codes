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
    ll T;
    cin>>T;
    while(T--)
    {
        ll n,m;
        cin>>n>>m;
        ll arr[n]={0};
        for(ll i=0;i<m;i++)
        {
            ll x;
            cin>>x;
            arr[x-1]=1;
        }
        ll count=0;
        for(ll i=0;i<n;i++)
        {
            if(!arr[i])
            {
                if(!count)
                {
                    cout<<(i+1)<<" ";
                    arr[i]=1;
                }
                count=1-count;
            }
        }
        cout<<endl;
        for(ll i=0;i<n;i++)
            if(!arr[i])
            cout<<i+1<<" ";
        cout<<endl;
    }
}
