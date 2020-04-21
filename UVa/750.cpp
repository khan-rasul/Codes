#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1e9+7
using namespace std;
int row[9]={0};
int x,y,lc=0;
bool place(int a,int b)
{
    for(int i=1;i<b;i++)
        if(abs(i-b)==abs(row[i]-a) || row[i]==a)
        return false;
    return true;
}
void backtrack(int c)
{
    if(c==9 && row[y]==x)
    {
        printf("%2d      ",++lc);
        for(int i=1;i<9;i++) cout<<row[i]<<" ";
        cout<<endl;
    }
    for(int r=1;r<9;r++)
    {
        if(place(r,c))
        {
            row[c]=r;
            backtrack(c+1);
            row[c]=0;
        }
    }
}
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--)
    {
        lc=0;
        memset(row,0,sizeof(row));
        cin>>x>>y;
        cout<<"SOLN       COLUMN\n";
        cout<<" #      1 2 3 4 5 6 7 8\n\n";
        backtrack(1);
    }
}

