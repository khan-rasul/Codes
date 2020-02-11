/*-----lusar98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
using namespace std;
int main()
{
    //fast();
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll flag=0;
    if(a!=d)
    {
        flag=1;
    }
    else if(c>0 && a<=0)
    {
        flag=1;
    }
    cout<<(flag?0:1)<<endl;
}
