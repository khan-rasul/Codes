#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=0;
    while(cin>>n,n!=0)
    {
        if(t++) cout<<endl;
        int flag=0;
        int a=1234,b=98765,x;
        for(int i=a;i<=b/n;i++)
        {
            int bit=i<10000;
            x=i*n;
            while(x>0){ int y=x%10; bit|=(1<<y); x/=10;}
            x=i;
            while(x>0){ int y=x%10; bit|=(1<<y); x/=10;}
            if(bit==((1<<10)-1)) {flag=1; printf("%0.5d / %0.5d = %d\n",i*n,i,n);}
        }
        if(!flag) cout<<"There are no solutions for "<<n<<".\n";
    }
}
