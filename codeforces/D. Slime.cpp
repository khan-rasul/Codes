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
    //fast();4
    ll n;
    cin>>n;
    ll sum=0,min=mod,a=0,b=0,max=-mod;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(x>=0) a=1;
        else b=1;
        sum+=abs(x);
        if(min>x)
            min=x;
        if(max<x)
            max=x;
    }
    if(a==0 && b==1)
    {
        min=-max;
    }
    else if((a==1&&b==1)||n==1) min=0;
    cout<<(sum-2*min);
}
