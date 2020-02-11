#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string source;
    string target="ACTG";
    cin>>source;
    int result=1e9;
    for(int i=0;i<=n-4;i++)
    {
        int temp=0;
        for(int j=0;j<4;j++)
        {
            int pop=abs(source[i+j]-target[j]);
            pop = min(pop,26-pop);
            temp+=pop;
        }
        result=min(result,temp);
    }
    cout<<result<<endl;
}
