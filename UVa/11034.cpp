#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,m;
        cin>>l>>m;
        l*=100;
        queue<int> left,right;
        for(int i=0;i<m;i++)
        {
            int a;
            string s;
            cin>>a>>s;
            if(s=="left")left.push(a);
            else right.push(a);
        }
        int side=0;
        while(!left.empty() || !right.empty())
        {
            int x=l,y=l;
            if(side++%2==0)
            {
                while(!left.empty()&&left.front()<=x)
                {x-=left.front(); left.pop();}
            }
            else
            {
                while(!right.empty()&&right.front()<=y)
                {
                    y-=right.front();
                    right.pop();
                }
            }

        }
        cout<<side<<endl;
    }
}
