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
    ll t;
    cin>>t;
    ll num=1;
    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        ll arr[n+1][m+1]={0};
        for(ll i=1;i<=n;i++)
            for(ll j=1;j<=m;j++)
            {
                cin>>arr[i][j];
                arr[i][j]+=arr[i][j-1];
                arr[i][j]+=arr[i-1][j];
                arr[i][j]-=arr[i-1][j-1];
            }
        ll area=0, cost=1<<40;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
                for(ll p=i;p<=n;p++)
                {
                    for(ll q=j;q<=m;q++)
                    {
                        ll subc=arr[p][q]-arr[i-1][q]-arr[p][j-1]+arr[i-1][j-1];
                        ll suba=(p-i+1)*(q-j+1);
                        if(subc<=k)
                        {
                            if(area<suba)
                            {
                                area=suba;
                                cost=subc;
                            }
                            else if(area==suba)
                                cost=min(cost,subc);
                        }
                    }
                }
            }
        }
        cout<<"Case #"<<num++<<": "<<area<<" "<<cost<<endl;
    }
}
