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
        ll s,n;
        cin>>s>>n;
        ll foo[n];
        for(ll i=0;i<n;i++)
            cin>>foo[i];
        ll memo[20000];
        memset(memo,1000,sizeof memo);
        memo[0]=0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=s-1;j>=0;j--)
            {
                if(memo[j]!=1000)
                    memo[j+foo[i]]=min(memo[j+foo[i]],memo[j]+1);
            }
        }
        ll i;
        for(i=s;i<20000;i++)
            if(memo[i]!=1000)
            break;
        cout<<i<<" "<<memo[i]<<endl;

    }
}
/*ll s,n,foo[110],money,moves,memo[10100][110];
ll solve(ll m,ll i,ll c)
{
    if(m>=s)
    {
        if(money>m)
        {
            money=m;
            moves=c;
        }
        else if(money==m && moves>c)
        {
            moves=c;
        }
        return c;
    }
    if(i==n)
        return mod;
    if(memo[m][i]!=-1)
        return memo[m][i];
    return memo[m][i]=min(solve(m+foo[i],i+1,c+1),solve(m,i+1,c));
}
int main()
{
    //fast();
    ll T;
    cin>>T;
    while(T--)
    {
        money=moves=mod;
        memset(memo,-1,sizeof memo);
        cin>>s>>n;
        for(ll i=0;i<n;i++)
            cin>>foo[i];
        ll k=solve(0,0,0);
        cout<<money<<" "<<moves<<endl;
    }
}*/
