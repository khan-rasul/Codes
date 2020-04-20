/*
* I'm a Ghost
* Now you see me, now you don't
*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf ((ll)1e18)
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
const int M = 10000;

bool isSafe(int a, int b, int N){
    
    if(a<N && b<M && a>=0 && b>=0)
    return true;
    else
    return false;
}
void dfs(int i,int j,vector<int> A[], int N, bool vis[][M])
{
    vis[i][j]=true;
    
    int x[8]={-1,-1,-1,0,0,1,1,1};
    int y[8]={-1,0,1,-1,1,-1,0,1};
    for(int k=0;k<8;k++)
    {
        int p=i+x[k];
        int q=j+y[k];
        
        if(isSafe(p,q,N) && !vis[p][q] && A[p][q])
            dfs(p,q,A,N,vis);
    }
}


int findIslands(vector<int> A[], int N) {

    bool vis[N][M];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
            vis[i][j]=false;
    }
    int c=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(!vis[i][j] && A[i][j])
            {
                dfs(i,j,A,N,vis);
                c++;
            }
        }
    }
    return c;
    // Your code here
}
int main()
{
    // fast();
    cout<<"hello";
    
}