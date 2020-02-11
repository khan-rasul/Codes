/*-----lusar98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
using namespace std;
ll n;
vector<ll> foo;
ll memo[5000][5000];
ll solve(ll l,ll r)
{
    if(l==r)
        return 0;
    if(memo[l][r]!=-1) return memo[l][r];
    if(foo[l]==foo[r])
        return solve(l+1,r-1)+1;
    return memo[l][r]=min(solve(l,r-1)+1,solve(l+1,r)+1);
}
int main()
{
    //fast();
    memset(memo,-1,sizeof memo);
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        foo.pb(x);
    }
    vector<ll>::iterator it=unique(foo.begin(),foo.end());
    foo.resize(distance(foo.begin(),it));
    cout<<solve(0,foo.size()-1)<<endl;
}
