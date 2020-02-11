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

ll memo[505][505];
ll solve(ll l,ll r,string s)
{
    if(l==r)
    return s.erase();
    if(memo[l][r]!=-1)
        return memo[l][r];
    if(s[l]==s[r])
        return memo[l][r]=1+solve(l+1,r-1);
    return memo[l][r]=min(solve(l+1,r)+1,solve(l,r-1)+1);
}
int main()
{
    //fast();
    string s;
    cin>>n>>s;
    string::iterator it=unique(s.begin(),s.end());
    s.resize(distance(s.begin(),it));
    memset(memo,-1,sizeof memo);
    //cout<<s;
    cout<<solve(0,s.size()-1,s);
}
