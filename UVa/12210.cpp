/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
using namespace std;
int main()
{
    //fast();
    //ll t;
    //cin>>t;
    ll b,s,num=1;
    while(cin>>b>>s,b!=0)
    {
        vector<ll> ba,sp;
        for(ll i=0;i<b;i++)
        {
            ll x;
            cin>>x;
            ba.push_back(x);
        }
        for(ll i=0;i<s;i++)
        {
            ll x;
            cin>>x;
            sp.push_back(x);
        }
        cout<<"Case "<<num++<<": ";
        if(b<=s)
            cout<<0<<endl;
        else
            cout<<b-s<<" "<<*min_element(ba.begin(),ba.end())<<endl;


    }
}
