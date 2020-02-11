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
    ll w;
    cin>>w;
    ll arr[8];
    for(ll i=0;i<8;i++) cin>>arr[i];
    vector<ll> foo;
    for(ll i=1;i<(1<<8);i++)
    {
        ll sum=0;
        for(ll j=0;j<8;j++)
        {
            if(i&(1<<j))
            {
                sum+=arr[j];
            }
        }
        foo.pb(sum);
    }
    sort(foo.rbegin(),foo.rend());
    ll i;
    for(i=0;i<foo.size() && foo[i]>w;i++);
    cout<<(i<foo.size() && foo[i]<=w?foo[i]:0);
}
