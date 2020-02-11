/*-----lusar_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
using namespace std;
int main()
{
    //fast();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        ll ac=0,bc=0,cc=0;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x%a==0)
                ac++;
            if(x%b==0)
                bc++;
            if(x%a==0 && x%b==0)
                cc++;
        }
        if(ac<bc || (cc==0 && ac==bc))
            cout<<"ALICE\n";
        else
            cout<<"BOB\n";
    }
}
