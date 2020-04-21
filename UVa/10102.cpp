#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
    fast();
    int m;
    while(cin>>m)
    {
        string a[m];
        for(int i=0;i<m;i++)
            cin>>a[i];
        vector<pair<int,int> > pos1,pos3;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
               if(a[i][j]=='1')
               pos1.push_back({i,j});
               if(a[i][j]=='3')
               pos3.push_back({i,j});
            }
        }
        int ans=-1;
        int mini=1<<30;
        for(int i=0;i<pos1.size();i++)
        {
            mini=1<<30;
            for(int j=0;j<pos3.size();j++)
            {
                mini=min(mini,abs(pos3[j].second-pos1[i].second)+abs(pos3[j].first-pos1[i].first));
            }
            ans=max(ans,mini);
        }
        cout<<ans<<endl;
    }
}
