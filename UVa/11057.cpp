/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
    //fast();
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        deque<int> foo;
        for(int i=0;i<n;i++)
        {
            int x;
            scanf("%d",&x);
            foo.push_back(x);
        }
        int m;
        scanf("%d\n",&m);
        sort(foo.begin(),foo.end());
        set<pair<int,int> > diff;
        int abs=1<<30;
        while(foo.size())
        {
            int x=foo.front();
            foo.pop_front();
            if(x<m)
            {
                if(binary_search(foo.begin(),foo.end(),m-x))
                diff.insert({min(x,m-x),max(x,m-x)});
            }
        }
        set<pair<int,int> >::iterator it=diff.begin();
        pair<int,int> ans;
        while(it!=diff.end())
        {
            if((it->second-it->first)<abs)
            {ans=*it; abs=it->second-it->first;}
            it++;
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",ans.first,ans.second);
    }
}
