#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,a;
    cin>>n>>b>>a;
    int max_a=a;
    int foo[n];
    for( int i=0; i<n ;i++)
        cin>>foo[i];
    int i=0;
    for(;i<n ;i++)
    {
        if(foo[i]==0)
        {
            if(a>0)
            a--;
            else
            {
                if(b==0)
                    break;
                b--;
            }
        }
        else
        {
            if(b!=0 && a<max_a)
            {
                a=a+1;
                b--;
            }
            else
            {
                if(a==0)
                    break;
                a--;
            }
        }
    }
    cout<<i;
    return 0;
}
