#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> adjoint[n+1];
    int r;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x>>arr[i];
        if(x==-1)
            r=i;
        else
            adjoint[x].pb(i);
    }
    set<int> result;
    queue<int> data;
    data.push(r);
    while(!data.empty())
    {
        int u=data.front();data.pop();
        int flag=arr[u];
        for(int i=0;i<(int)adjoint[u].size();i++)
        {
            if(arr[adjoint[u][i]]!=1)
                flag=0;
            data.push(adjoint[u][i]);
        }
        if(flag)
            result.insert(u);
    }
    if(result.size()==0)
    {cout<<"-1"; return 0;}
    for(set<int>::iterator it=result.begin();it!=result.end();it++)
        cout<<*it<<" ";


}
