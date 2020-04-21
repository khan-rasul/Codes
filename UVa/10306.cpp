/*-----lusar_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
using namespace std;
ll arr[45][2],m,s,memo[310][310];
ll solve(ll c,ll it)
{
    if(c*c+it*it==s*s)
        return 0;
    if(c*c+it*it>s*s)
        return 1000;
    if(memo[c][it]!=-1)
        return memo[c][it];
    ll ans=1000;
    for(ll j=0;j<m;j++)
        ans=min(ans,solve(c+arr[j][0],it+arr[j][1])+1);
    return memo[c][it]=ans;
}
int main()
{
    //fast();
    ll T;
    cin>>T;
    while(T--)
    {
        memset(memo,-1,sizeof memo);
        cin>>m>>s;
        for(ll i=0;i<m;i++)
            cin>>arr[i][0]>>arr[i][1];
        ll ans=solve(0,0);
        if(ans>=1000)
            cout<<"not possible\n";
        else
        cout<<ans<<endl;
    }
}
