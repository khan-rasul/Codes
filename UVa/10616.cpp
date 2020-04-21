/*-----lusar_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
using namespace std;
ll arr[200],n;
ll memo[200][20][10];
ll ks(ll i,ll sum,ll m,ll d)
{
    if(m==0 && sum%d==0)
        return 1;
    if(m==0)
        return 0;
    if(i==n)
        return 0;
    if(memo[i][sum%d][m]!=-1)
        return memo[i][sum%d][m];
    ll temp=arr[i]%d;
    if(temp<0)
         temp+=d;
    return memo[i][sum%d][m]=ks(i+1,(sum+temp)%d,m-1,d)+ks(i+1,sum%d,m,d);
}
int main()
{
    //fast();
    ll q,tn=1;
    //cin>>T;
    while(cin>>n>>q,n!=0)
    {
        memset(arr,0,sizeof arr);
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        ll qn=1;
        cout<<"SET "<<tn++<<":\n";
        while(q--)
        {
            memset(memo,-1,sizeof memo);
            ll d,m;
            cin>>d>>m;
            cout<<"QUERY "<<qn++<<": ";
            cout<<ks(0,0,m,d)<<endl;
        }
    }
}
