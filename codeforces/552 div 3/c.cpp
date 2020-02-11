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
    ll a,b,c;
    cin>>a>>b>>c;
    ll arr[7];
    ll m=min(a/3,min(b/2,c/2));
    ll a1=a-3*m,b1=b-2*m,c1=c-2*m;
    ll mon=0;
    arr[0]=max(0ll,a1--);
    arr[1]=max(0ll,b1--);
    arr[2]=max(0ll,c1--);
    arr[3]=max(0ll,a1--);
    arr[4]=max(0ll,c1--);
    arr[5]=max(0ll,b1--);
    arr[6]=max(0ll,a1--);
    ll tim=x*7;
    for(ll i=0;i<7;i++)
    {
        arr[i]-=x;
    }
    ll length=0,ans=0;
    for(ll i=0;i<7;i++)
    {
        if(arr[i]==0)
        {
            length=0;
        }
        else
            length++;
        ans=max(length,ans);
    }
    if(length && ans<7)
    {
        for(ll i =0 ;arr[i]!=0;i++)
            length++;
    }
    ans= max(length,ans);
    cout<<tim+ans;
}
