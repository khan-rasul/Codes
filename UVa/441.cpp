#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
    fast();
    int k,c=0;
    while(cin>>k,k!=0)
    {
        if(c++!=0)
            cout<<endl;
        int arr[k];
        for(int i=0;i<k;i++) cin>>arr[i];
        for(int i=0;i<=k-6;i++)
            for(int j=i+1;j<=k-5;j++)
                for(int l=j+1;l<=k-4;l++)
                    for(int m=l+1;m<=k-3;m++)
                        for(int n=m+1;n<=k-2;n++)
                            for(int o=n+1;o<=k-1;o++)
                            cout<<arr[i]<<" "<<arr[j]<<" "<<arr[l]<<" "<<arr[m]<<" "<<arr[n]<<" "<<arr[o]<<endl;


    }
}
