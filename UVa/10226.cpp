#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d\n",&t);
    string s;
    while(t--)
    {
        int sum=0;
        map<string,int> tree;
        while(getline(cin,s)&& !(s=="\n" || s==""))
        {
            tree[s]+=1;
            sum++;
        }
        for(map<string,int>::iterator it=tree.begin();it!=tree.end();it++)
        {
            cout<<it->first<<" "<<(float)(it->second)/(float)sum*100<<endl;
        }
    }
}

