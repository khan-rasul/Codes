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
    ll x;
    ll flag=0;
    while(scanf("%lld",&x)!=EOF)
    {
        if(x==42)
            flag=1;
        if(!flag) cout<<x<<endl;
    }
}
