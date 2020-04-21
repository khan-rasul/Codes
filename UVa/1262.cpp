/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
vector<char> mask,com[5];
void func(int c,int r,int n)
{
    if(c==5) return;
    int mark=1;
    for(int i=c+1;i<5;i++)
        mark*=com[i].size();
    if(n>mark)
        func(c,r+1,n-mark);
    else
    {
        mask.push_back(com[c][r]);
        func(c+1,0,n);
    }
}
int main()
{
    //fast();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char grid1[6][6],grid2[6][6];
        for(int i=0;i<6;i++)
            scanf("%s",grid1[i]);
        for(int i=0;i<6;i++)
            scanf("%s",grid2[i]);
        mask.clear();
        int soln=1;
        for(int i=0;i<5;i++)
        {
            com[i].clear();
            for(int j=0;j<6;j++)
            {
                for(int k=0;k<6;k++)
                    if(grid1[j][i]==grid2[k][i])
                        com[i].push_back(grid1[j][i]);
            }
            sort(com[i].begin(),com[i].end());
            vector<char>::iterator it=unique(com[i].begin(),com[i].end());
            com[i].resize(distance(com[i].begin(),it));
            soln*=com[i].size();

        }
        if(n>soln)
            cout<<"NO\n";
        else
        {
            func(0,0,n);
            for(int i=0;i<5;i++)
                cout<<mask[i];
            cout<<endl;
        }
    }
}
