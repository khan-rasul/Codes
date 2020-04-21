/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1e9+7
#define eps 1e-9
using namespace std;
int main()
{
    //fast();
    //ll t;
    //cin>>t;
    ll n,d,r;
    while(cin>>n>>d>>r,n!=0)
    {
        vector<ll> mor,eve;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            mor.push_back(x);
        }
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            eve.push_back(x);
        }
        sort(mor.begin(),mor.end());
        sort(eve.begin(),eve.end());
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            if(mor[i]+eve[n-1-i]>d)
            sum=sum+mor[i]+eve[n-1-i]-d;
        }
        cout<<sum*r<<endl;
    }
}
