#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n+1],i,j,count=0;
   for(i=0;i<n;i++)
   cin>>arr[i];
   for(i=0;i<=30;i++)
   {
       for(j=0;j<n;j++)
       {
        if( __builtin_popcount(arr[j])==i)
        {
            cout<<arr[j]<<" ";
            count++;
        }
       }
       if(count==n)
       break;
   }
    return 0;
}
