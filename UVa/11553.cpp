/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        vector<int> col;
        for(int i=0;i<n;i++) col.push_back(i);
        int ans=1<<30,sum=0;
        do{
            for(int i=0;i<n;i++)
                sum+=arr[i][col[i]];
            ans=min(ans,sum);
        }while(next_permutation(col.begin(),col.end()));
        cout<<ans<<endl;

    }
}
