#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n,n!=0)
    {
        int a=0,b=0;
        int count=0;
        //cout<<__builtin_popcount(n)<<endl;
        for(int i=0;count<__builtin_popcount(n);i++)
        {
            if(n&(1<<i))
            {
                (count%2==1)?b=b|(1<<i):a=a|(1<<i);
                count++;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
}
