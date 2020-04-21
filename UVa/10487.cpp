#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
    fast();
    int n;
    int num=1;
    while(cin>>n,n!=0)
    {
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int brr[n*n],v=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                brr[v++]=arr[i]+arr[j];
            }
        }
        cout<<"Case "<<num++<<":\n";
        int q;
        cin>>q;
        while(q--)
        {
            int m;
            cin>>m;
            int min=abs(brr[0]-m),index=0;
            for(int i=1;i<v;i++)
            {
                if(min>abs(brr[i]-m))
                {
                    min=abs(brr[i]-m);
                    index=i;
                }
            }
            cout<<"Closest sum to "<<m<<" is "<<brr[index]<<".\n";
        }
    }
}
