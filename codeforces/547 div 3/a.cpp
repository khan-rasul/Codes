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
    ll n,m;
    cin>>n>>m;
    if(m%n!=0 )
    {
        cout<<"-1\n";
        return 0;
    }
    m/=n;
    ll ans=0;
    while(m!=1 && m%2==0)
    {
        ans++;
        m/=2;
    }
    while(m!=1 && m%3==0)
    {
        ans++;
        m/=3;
    }

    cout<<(m==1?ans:-1)<<endl;
}
