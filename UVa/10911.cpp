#include<bits/stdc++.h>
using namespace std;
double dist[16][16],memo[1<<16];
int tar,n;
double matching(int mask)
{
    if(mask==tar) return 0;
    int p1,p2;
    double ans=200000;
    for(int p1=0;p1<2*n;p1++)
    if(!(mask&(1<<p1))) break;
    for(int p2=p1+1;p1<2*n;p2++)
    if(!(mask&(1<<p2)))
    ans=min(ans,dist[p1][p2]+matching(mask|(1<<p1)|(1<<p2)));
    return ans;
}
int main()
{
    while(cin>>n,n)
    {
        vector<pair<int,int> > rec;
        int k=2*n,l;
        l=k;
        tar=(1<<n)-1;
        while(k--)
        {
            int a,b;
            string s;
            cin>>s>>a>>b;
            rec.push_back(make_pair(a,b));
        }
        for(int i=0;i<l-1;i++)
        {
            for(int j=i+1;j<l;j++)
            dist[i][j]=dist[j][i]=hypot(rec[i].first-rec[j].first,rec[i].second-rec[j].second);
        }
        cout<<matching(0)<<endl;
    }
}
