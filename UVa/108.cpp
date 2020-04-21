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
    //ll t;
    //cin>>t;
    ll n;
    while(scanf("%lld",&n)!=EOF)
    {
        ll arr[n][n],num=-127;
        for(ll i=0;i<n;i++)
            for(ll j=0;j<n;j++)
            {
                cin>>arr[i][j];
                if(num<arr[i][j])
                    num=arr[i][j];
                if(j>0)
                    arr[i][j]+=arr[i][j-1];
            }
        ll ans=0;
        for(ll l=0;l<n;l++)
            for(ll r=l;r<n;r++)
            {
                ll sub=0;
                for(ll i=0;i<n;i++)
                {
                    sub+=arr[i][r];
                    if(l>0)
                        sub-=arr[i][l-1];
                    if(sub<0) sub=0;
                    ans=max(ans,sub);
                }
            }
        if(!ans)
            ans=num;
        cout<<ans<<endl;

    }
}
