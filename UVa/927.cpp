#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--)
    {
        int i;
        cin>>i;
        int coeff[i+1];
        for(int j=0;j<=i;j++)
            cin>>coeff[j];
        int d,k;
        cin>>d>>k;
        float c=(float)k*2/(d);
        float n1=(-1-sqrt(1+4*c))/2,n2=(-1+sqrt(1+4*c))/2;
        float n=ceil(max(n1,n2));
        int ans=0;
        for(int j=0;j<=i;j++)
        {
            ans+=coeff[j]*pow(n,j);
        }
        cout<<n<<" "<<ans<<endl;
    }
}
