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
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int count=0,sum=0;
        for(int i=1;i<n;i++)
        {
            count=0;
            for(int j=0;j<i;j++)
            {
                if(arr[j]<=arr[i])
                    count++;
            }
            sum+=count;
        }
        cout<<sum<<endl;
    }
}
