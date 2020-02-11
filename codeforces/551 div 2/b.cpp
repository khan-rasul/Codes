#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,h,x;
    cin >> n >> m >> h;
    int object[n][m];
    for(int i =0 ;i< m; i++)
    {
        cin>>x;
        for( int j=0 ;j<n ; j++)
        {
            object[j][i]=x;
        }
    }
    for( int i =0 ; i< n ; i++)
    {
        cin>>x;
        for( int j=0; j<m; j++)
        {
            object[i][j]=min(object[i][j],x);
        }
    }
    for(int i=0; i< n;i++)
    {
        for(int j=0;j <m;j++)
        {
            cin>>x;
            if(x==0)
                object[i][j]=0;
        }
    }
    for( int i=0; i<n;i++)
    {
        for(int j=0; j< m; j++)
            cout<<object[i][j]<<" ";
        cout<<"\n";
    }
}
