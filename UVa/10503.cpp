/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
int n,m,a,b,c,flag;
struct data
{
    int x,y;
    bool ch;
}store[50];
void check(int s,int cur)
{
    if(s==n)
    {
        if(cur==b)
            flag=1;
        return;
    }
    for(int i=0;i<m;i++)
    {
        if(store[i].ch==false)
        {
            if(store[i].x==cur)
            {
                store[i].ch=1;
                check(s+1,store[i].y);
                store[i].ch=0;
            }
            if(store[i].y==cur)
            {
                store[i].ch=1;
                check(s+1,store[i].x);
                store[i].ch=0;
            }
        }
    }
}
int main()
{
    fast();
    while(cin>>n,n!=0)
    {
        flag=0;
        cin>>m;
        cin>>c>>a;
        cin>>b>>c;
        for(int i=0;i<m;i++)
        {
            cin>>store[i].x>>store[i].y;
            store[i].ch=0;
        }
        check(0,a);
        cout<<(flag?"YES\n":"NO\n");

    }
}
