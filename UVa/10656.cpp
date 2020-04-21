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
    ll t;
    //cin>>t;
    while(cin>>t,t!=0)
    {
        vector<ll> foo;
        for(ll i=0;i<t;i++)
        {
            ll x;
            cin>>x;
            if(x!=0)
            {
                foo.push_back(x);
            }
        }
        for(ll i=0;i<foo.size();i++)
        {
            cout<<foo[i];
            if(i<foo.size()-1)
                cout<<" ";
        }
        if(!(ll)foo.size())
            cout<<"0";
        cout<<endl;

    }
}
