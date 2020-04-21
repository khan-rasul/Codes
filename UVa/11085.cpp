/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
int row[8],rog[8],m=8;
bool place(int r,int c)
{
    for(int i=0;i<c;i++)
    {
        if(row[i]==r || abs(r-row[i])==abs(c-i))
            return false;
    }
    return true;
}
void backtrack(int c)
{
    if(c==8)
    {
        int count=0;
        for(int i=0;i<8;i++)
        {
            if(row[i]!=rog[i]-1)
                count++;
        }
        m=min(count,m);
    }
    for(int r=0;r<8;r++)
    {
        if(place(r,c))
        {
            row[c]=r;
            backtrack(c+1);
        }
    }
}
int main()
{
    fast();
    int num=1;
    while(cin>>rog[0])
    {
        m=8;
        for(int i=1;i<8;i++)
            cin>>rog[i];
        backtrack(0);
        cout<<"Case "<<num++<<": "<<m<<endl;
    }

}
