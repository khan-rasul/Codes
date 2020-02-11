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
    string s;
    cin>>s;
    ll flag=0;
    for(ll i=0;i<5;i++)
    {
        string q;
        cin>>q;
        if(s[0]==q[0] || s[1]==q[1])
            flag=1;
    }
    cout<<(flag?"YES":"NO");
}
