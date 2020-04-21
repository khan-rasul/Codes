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
        int n,p,flag=0;
        cin>>n>>p;
        int arr[p];
        for(int i=0;i<p;i++) cin>>arr[i];
        int sum;
        for(int i=0;i<(1<<p);i++)
        {
            sum=0;
            for(int j=0;j<p;j++)
            {
                if(i&(1<<j))
                {
                    sum+=arr[j];
                    if(sum>n)
                        break;
                }
            }
            if(sum==n)
            { flag=1;break;}
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
