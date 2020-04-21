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
    //cin>>t;
    while(cin>>t,t!=0)
    {
        ll arr[t];
        for(ll i=0;i<t;i++)
        {
            cin>>arr[i];
        }
        ll sum=0,ans=0;
        for(ll i=0;i<t;i++)
        {
            sum+=arr[i];
            ans=max(ans,sum);
            if(sum<0)
                sum=0;
        }
        if(ans>0)
            cout<<"The maximum winning streak is "<<ans<<".\n";
        else
            cout<<"Losing streak.\n";
    }
}

