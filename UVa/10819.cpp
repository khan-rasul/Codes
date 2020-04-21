/*-----lusar_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
using namespace std;
ll arr[105][2],n,M,memo[110][10300];
bool flag=true;
ll solve(ll i,ll m)
{
    if(m<=2000 && m>M)
        return -1000;
    if(m>2000 && m-200>M)
        return -1000;
    if(i==n)
    {
        if((m<=M)||(m>2000 && m<=(M+200)))
            return 0;
        else
            return -1000;
    }
    if(memo[i][m]!=-1)
        return memo[i][m];
    return memo[i][m]=max( solve(i+1,m+arr[i][0]) + arr[i][1] , solve(i+1,m) );
}
int main()
{
    //fast();
    ll t=0;
    while(scanf("%lld %lld",&M,&n)!=EOF)
    {
        flag=true;
        memset(memo,-1,sizeof(memo));
        for(ll i=0;i<n;i++)
            cin>>arr[i][0]>>arr[i][1];
        cout<<solve(0,0)<<endl;
    }
}
