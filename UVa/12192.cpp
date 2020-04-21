/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
    fast();
    int n,m,t=0;
    while(cin>>n>>m,n!=0)
    {
        vector<int> arr[m+n];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                int x;
                cin>>x;
                if(i>j)
                {
                    arr[i-j+m-1].push_back(x);
                }
                else
                {
                    arr[m-1-j+i].push_back(x);
                }
            }
        int q;
        cin>>q;
        while(q--)
        {
            int l,u;
            cin>>l>>u;
            int ans=0;
            for(int i=0;i<m+n-1;i++)
            {
                vector<int>::iterator p=lower_bound(arr[i].begin(),arr[i].end(),l),q;
                q=upper_bound(arr[i].begin(),arr[i].end(),u);
                ans=max(ans,(int)(q-p));
            }
            cout<<ans<<endl;
        }
        cout<<"-\n";
    }
}
