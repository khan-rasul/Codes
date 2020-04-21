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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> coins;
        for(ll i=0;i<n;i++)
        {
            int x;
            cin>>x;
            coins.push_back(x);
        }
        ll cnt=0,sum=0;
        for(ll i=0;i<n-1;i++)
        {
            if(coins[i]+sum<coins[i+1])
            {
                cnt++;
                sum+=coins[i];
            }
        }
        cout<<cnt+1<<endl;
    }
}
