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
    set<ll> foo;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        foo.insert(x);
    }
    cout<<foo.size()-1<<endl;
}