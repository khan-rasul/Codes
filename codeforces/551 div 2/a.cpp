#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    double arr[n][2];
    int change = 1e9;
    int result;
    for( int i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
        int x = ceil(( t - arr[i][0])/arr[i][1]);
        if(x < 0 ) x =0;
        int temp = min(change, (int)fabs(arr[i][0] + x*arr[i][1] -t ));
        if(change>temp)
        {
            change=temp;
            result=i;
        }
    }
    cout<<result+1;


}
