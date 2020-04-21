/*-----lusar_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
using namespace std;
ll n,t,x,k,p[100],f[100],memo[110][1100][23];
ll solve(ll i,ll m,ll c)
{
    ll money=ceil(1.1L*(double)(m+n*t));
    if(money>n*x || (c>2*n))
        return -1000000000;
    if(i>=k||c==2*n||money==n*x)
        return 0;
    if(memo[i][m][c]!=-1)
        return memo[i][m][c];
    return memo[i][m][c]=max( max( solve(i+1,m+p[i],c+1)+f[i] , solve(i+1,m,c) ), solve(i+1,m+2*p[i],c+2)+2*f[i] );
}
int main()
{
    //fast();
    while(scanf("%lld %lld %lld %lld",&n,&x,&t,&k),n+x+t+k!=0)
    {
        n++;
        memset(memo,-1,sizeof(memo));
        for(ll i=0;i<k;i++)
        {
            scanf("%lld",&p[i]);
            f[i]=0;
            for(ll j=0;j<n;j++)
            {
                ll x;
                scanf("%lld",&x);
                f[i]+=x;
            }
        }
        printf("%.2lf\n",(double)solve(0,0,0)/(double)n);
    }
}
