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
ll parent[150005],height[150005]={0},nextt[150005],foo[150005],bar[150005];
ll find(ll a)
{
    if(parent[foo[a]]==-1)
        return foo[a];
    return foo[a]=(parent[a]==-1?a:find(parent[a]));
}
ll child(ll a)
{
    if(nextt[bar[a]]==-1)
        return bar[a];
    return bar[a]=(nextt[a]==-1?a:child(nextt[a]));
}
void un(ll a,ll b)
{
    ll x=find(a),y=find(b);
    if(x!=y)
    {
        if(height[x]>height[y])
            {ll temp=child(a); parent[y]=temp; height[x]++; nextt[temp]=y; }
        else
            {ll temp=child(b); parent[x]=temp; height[y]++; nextt[temp]=x; }
    }
}
int main()
{
    //fast();
    ll n;
    cin>>n;
    memset(parent,-1,sizeof parent);
    memset(nextt,-1,sizeof nextt);
    for(ll i=0;i<n;i++)
    {
        foo[i]=bar[i]=i;
    }
    for(ll i=0;i<n-1;i++)
    {
        ll x,y;
        cin>>x>>y;
        x--;y--;
        un(x,y);
    }
    ll i;
    for(i=0;i<n && parent[i]!=-1;i++);
    while(i!=-1)
    {
        cout<<i+1<<" ";
        i=nextt[i];
    }
}
