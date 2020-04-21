/*-----lusar_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
using namespace std;
int main()
{
    //fast();
    ll T;
    cin>>T;
    while(T--)
    {
        ll n;
        cin>>n;
        ll arr[2*n+1][2*n+1];
        memset(arr,0,sizeof arr);
        for(ll i=1;i<=2*n;i++)
        {
            for(ll j=1;j<=2*n;j++)
            {
                if(i<=n&&j<=n)
                {
                    cin>>arr[i][j];
                    arr[i+n][j]=arr[i][j+n]=arr[i+n][j+n]=arr[i][j];
                }
                arr[i][j]+=arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
            }
        }
        ll ans=-100;
        for(ll i=1;i<=n;i++) for(ll j=1;j<=n;j++)
            for(ll k=i;k<i+n;k++) for(ll l=j;l<j+n;l++)
            {
                ll sub=arr[k][l]-arr[k][j-1]-arr[i-1][l]+arr[i-1][j-1];
                ans=max(ans,sub);
            }
        cout<<ans<<endl;

    }
}
