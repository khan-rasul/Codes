#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl '\n'
using namespace std;
const ll inf=1e18;
/*ll power(ll x,ll y)
{
    ll res=1;
    while(y>0)
    {
        if(y%2==1)
            res=(res*x)%mod;
        x=(x*x)%mod;
        y=y/2;
    }
    return res;
}*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
      ll n1,n2,n3,n,m,a,b,c,i;
      cin>>n1>>n2>>n3;
      n=n1+n2+n3;
      ll dp[n+1][4],arr[n+1];
      memset(dp,0,sizeof(dp));
      for(i=0;i<n1;i++)
      {
          cin>>m;
          arr[m]=1;
      }
      for(i=0;i<n2;i++)
      {
          cin>>m;
          arr[m]=2;
      }
      for(i=0;i<n3;i++)
      {
          cin>>m;
          arr[m]=3;
      }
      if(arr[1]==1)
        dp[1][2]=1,dp[1][3]=1;
      else if(arr[1]==2)
        dp[1][1]=1,dp[1][3]=1;
      else
        dp[1][1]=1,dp[1][2]=1;
      for(i=2;i<=n;i++)
      {
          if(arr[i]==1)
            dp[i][1]=dp[i-1][1];
          else
            dp[i][1]=dp[i-1][1]+1;
          if(arr[i]==2)
            dp[i][2]=min(dp[i-1][1],dp[i-1][2]);
          else
            dp[i][2]=min(dp[i-1][1],dp[i-1][2])+1;
          if(arr[i]==3)
            dp[i][3]=min(dp[i-1][1],min(dp[i-1][2],dp[i-1][3]));
          else
            dp[i][3]=min(dp[i-1][1],min(dp[i-1][2],dp[i-1][3]))+1;
          //  cout<<dp[i][1]<<" "<<dp[i][2]<<" "<<dp[i][3]<<endl;
      }
      for(i = 1 ; i < 4 ; i++ )
      {
        for(ll j = 1 ; j <= n ; j++)
          cout<<dp[j][i]<<" ";
        cout<<endl;
      }
     // cout<<dp[3][1]<<endl;
      cout<<min(dp[n][1],min(dp[n][2],dp[n][3]))<<endl;
}