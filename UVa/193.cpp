/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
int n,k,ans;
vector<int> adj[105];
bool place(int c,int mask)
{
    if(mask&(1<<c)) return false;
    for(int i=0;i<n;i++)
    {
        if(mask&(1<<i))
        {
            for(int j=0;j<adj[c].size();j++)
            {
                if(adj[c][j]==i)
                    return false;
            }
        }
    }
    return true;
}
void color(int c,int mask)
{
    if(mask!=0 && __builtin_popcount(mask)>=__builtin_popcount(ans))
        ans=mask;
    for(int i=c+1;i<n;i++)
    {
        if(place(i,mask))
            color(i,mask|(1<<i));
    }
}
int main()
{
    //fast();
    int m;
    cin>>m;
    while(m--)
    {
        cin>>n>>k;
        ans=0;
        for(int i=0;i<105;i++) adj[i].clear();
        for(int i=0;i<k;i++)
        {
            int a,b;
            cin>>a>>b;
            adj[a-1].push_back(b-1);
            adj[b-1].push_back(a-1);
        }
        color(-1,0);
        cout<<__builtin_popcount(ans)<<endl;
        int c=0;
        for(int i=0;i<n;i++)
            if(ans&(1<<i))
            {if(c++) cout<<" "; cout<<i+1;}
        cout<<endl;
    }
}
