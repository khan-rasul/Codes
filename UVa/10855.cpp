/*----lusar_98----*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,n;
    while(cin>>N>>n,N!=0)
    {
        string big[N],small[n];
        int a=0,b=0,c=0,d=0;
        for(int i=0;i<N;i++)
        cin>>big[i];
        for(int i=0;i<n;i++)
        cin>>small[i];
        for(int i=0;i<=N-n;i++)
            for(int j=0;j<=N-n;j++)
                {
                    for(int k=i;k<i+n;k++)
                        for(int l=j;l<j+n;l++)
                            if(big[k][l]!=small[k-i][l-j])
                                goto X;
                    a++;
                    X:
                    ;
                }
        for(int i=0;i<=N-n;i++)
            for(int j=0;j<=N-n;j++)
                {
                    for(int k=i;k<i+n;k++)
                        for(int l=j;l<j+n;l++)
                            if(big[k][l]!=small[n-l+j-1][k-i])
                                goto Y;
                    b++;
                    Y:
                    ;
                }
        for(int i=0;i<=N-n;i++)
            for(int j=0;j<=N-n;j++)
                {
                    for(int k=i;k<i+n;k++)
                        for(int l=j;l<j+n;l++)
                            if(big[k][l]!=small[n-k+i-1][n-l+j-1])
                                goto Z;
                    c++;
                    Z:
                    ;
                }
        for(int i=0;i<=N-n;i++)
            for(int j=0;j<=N-n;j++)
                {
                    for(int k=i;k<i+n;k++)
                        for(int l=j;l<j+n;l++)
                            if(big[k][l]!=small[l-j][n-k+i-1])
                                goto W;
                    d++;
                    W:
                    ;
                }
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
            
        
    }
}
