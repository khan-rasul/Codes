#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=1e9,b=1e9;
    for(int i=0 ; i< n; i++)
    {
        int x;
        cin>>x;
        if(x==0)
            a=i+1;
        else
            b=i+1;
    }
    cout<<min(a,b)<<"\n";
}
