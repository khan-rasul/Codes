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
    ll n;
    cin>>n;
    ll a=0,b=0,ans=1,p=0,q=0;;
    for(ll i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        x-=a;y-=b;
        if(a<=b && a+x>=b)
        {
            x-=(b-a);
            a=b;
            if(a!=p)
            ans++;
            ans+=min(x,y);
        }
        else if(b<=a && b+y>=a)
        {
            y-=(a-b);
            b=a;
            if(b!=q)
            ans++;
            ans+=min(x,y);
        }
        a+=x;b+=y;
        p=a;q=b;
    }
    cout<<ans;
}
