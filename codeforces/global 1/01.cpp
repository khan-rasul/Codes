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
    ll b,k;
    cin>>b>>k;
    ll x=0,y=0,g;
    for(ll i=0;i<k;i++)
    {
        cin>>g;
        if(i!=k-1)
        (g%2)?y++:x++;
    }
    ll flag=1;
    if(b%2==0)
    {
        flag=0;
    }
    else
    {
        if(y%2==0)
            flag=0;
    }
    (flag+g)%2?cout<<"odd":cout<<"even";

}
