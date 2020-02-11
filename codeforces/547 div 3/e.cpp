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
    ll h,n;
    cin>>h>>n;
    ll arr[n],p[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        p[i]=arr[i];
        if(i)
            p[i]+=p[i-1];
    }
    ll i;
    for(i=0;i<n && p[i]+h>0;i++);
    ll ans=0;
    if(i<n && p[i]+h<=0) ans=i+1;
    else if(p[n-1]>0) {cout<<"-1\n"; return 0;}
    else if(p[n-1]<0)
    {
        ans=h/(abs(p[n-1]));
        h-=ans*p[n-1];
        ans*=n;
        for(i=0;i<n;i++)
        {
            if(p[i]+h<=0)
            {
                ans+=(i+1);
                break;
            }
        }
    }
    cout<<ans<<endl;


}
