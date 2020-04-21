/*-----lusar_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
using namespace std;
ll arr[]={1,5,10,25,50},memo[6][30100];
ll ways(ll i,ll value)
{
    if(value==0) return 1;
    if(i==5 || value<0)
        return 0;
    if(arr[i]>value)
        return memo[i][value]=memo[i-1][value];
    if(memo[i][value]!=-1)
        return memo[i][value];
    return memo[i][value]=ways(i+1,value)+ways(i,value-arr[i]);
}
int main()
{
    //fast();
    ll T;
    //cin>>T;
    while(scanf("%lld",&T)!=EOF)
    {
        memset(memo,-1,sizeof memo);
        ll m=ways(0,T);
        if(m==1)
        printf("There is only 1 way to produce %lld cents change.\n",T);
        else
        printf("There are %lld ways to produce %lld cents change.\n",m,T);
    }
}
