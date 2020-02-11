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
ll power(ll a, ll p, ll m)
{
    if(p==1)
        return a%m;
    ll temp=power(a,p/2,m);
    temp=(temp*temp)%m;
    if(p%2)
        return (a*temp)%m;
    return temp;
}
int main()
{
    //fast();
    ll i;
    cin>>i;
        cout<<(power(3,i,mod) + power(2,i,mod))%mod<<endl;
        //printf("%d",printf("012345"));
}
