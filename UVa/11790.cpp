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
    ll T,num=1;
    cin>>T;
    while(T--)
    {
        ll n;
        cin>>n;
        ll foo[n],bar[n];
        for(ll i=0;i<n;i++)
            cin>>foo[i];
        for(ll i=0;i<n;i++)
            cin>>bar[i];
        ll lis[n]={0},lds[n]={0},a=0,b=0;
        for(ll i=0;i<n;i++)
        {
            lis[i]=lds[i]=bar[i];
            for(ll j=i-1;j>=0;j--)
            {
                if(foo[i]>foo[j])
                    lis[i]=max(lis[i],lis[j]+bar[i]);
                if(foo[i]<foo[j])
                    lds[i]=max(lds[i],lds[j]+bar[i]);
            }
            a=max(a,lis[i]);
            b=max(b,lds[i]);
        }
        cout<<"Case "<<num++<<". ";
        if(b>a)
            cout<<"Decreasing ("<<b<<"). Increasing ("<<a<<").\n";
        else
            cout<<"Increasing ("<<a<<"). Decreasing ("<<b<<").\n";
    }
}
