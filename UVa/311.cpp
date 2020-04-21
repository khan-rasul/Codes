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
    //ll t=1;
    //cin>>t;
    ll a,b,c,d,e,f;
    while(cin>>a>>b>>c>>d>>e>>f,a||b||c||d||e||f)
    {
        ll sum=0;
        sum=e+f;
        ll diff=e*11;
        a-=diff;
        if(a<0)
        a=0;
        sum+=d;
        diff=d*5;
        if(b<diff)
        {
            diff-=b;
            b=0;
            a-=4*diff;
            if(a<0) a=0;
        }
        else
            b-=diff;
        diff=0;
        sum+=c/4;
        c%=4;
        if(c!=0)
        {
            sum+=1;
            diff=2*(4-c)-1;
            ll one=8-c;
            if(b<diff)
            {
                diff-=b;
                b=0;
                one+=4*diff;
            }
            else
            {
                b-=diff;
            }
            a-=one;
            if(a<0) a=0;
        }
        diff=0;
        sum+=b/9;
        b%=9;
        if(b!=0)
        {
            sum+=1;
            diff=36-4*b;
            a-=diff;
            if(a<0) a=0;
        }
        sum+=ceil(a/36.0);
        cout<<sum<<endl;
    }
}
