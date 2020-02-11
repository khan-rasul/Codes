/*-----lusar_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
using namespace std;
int main()
{
    //fast();
    ll T;
    cin>>T;
    while(T--)
    {
        ll N,t,x,y,z;
        cin>>N>>t>>x>>y>>z;
        ll a=180,b=2*N+1;
        ll m,n=b;
        if(t==1)
        {
            if(x==z)
                m=x;
            else
            m=b+(x-2*y);
        }
        else if(t==2)
        {
            m=b-2*y;
        }
        else if(t==3)
        {
            if(x==z)
                m=x;
            else
            m=b+(z-2*y);
        }
        else if(t==4)
        {
            m=b-2*y;
        }
        ll temp=__gcd(m,n);
        m/=temp;
        n/=temp;
        cout<<m<<" "<<n<<endl;
    }
}
