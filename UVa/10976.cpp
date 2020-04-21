#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
    fast();
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int count=0;
        vector<pair<int,int> > store;
        for(int i=n+1;i<=2*n;i++)
        {
            int k=n*i;
            if(k%(i-n)==0)
            {store.push_back({k/(i-n),i}); count++;}

        }
        printf("%d\n",count);
        for(int i=0;i<count;i++)
        {
            printf("1/%d = 1/%d + 1/%d\n",n,store[i].first,store[i].second);
        }
    }
}
