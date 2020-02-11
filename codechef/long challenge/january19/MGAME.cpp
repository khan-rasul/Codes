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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,p;
        cin>>n>>p;
        ll m=n,c=1;
        m/=2;
        if(n%2==0)
        m--;
        if(m==0)
            cout<<p*p*p<<endl;
        else
        cout<<c*(p-m)*(p-m)+(p-n)*c*(p-m)+(p-n)*(p-n)*c<<endl;
    }
}
