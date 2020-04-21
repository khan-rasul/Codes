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
    cin>>t;
    ll num=1;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll c=0,sc=0,h=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='.')
                c++;
            if((c==2) || (c!=0 && s[i]=='#'))
            {
                s[i-1]='#';
                s[i]='#';
                s[i+1]='#';
                c=0;
                i++;
                sc++;
            }
        }
        if(c!=0)
            sc++;
        cout<<"Case "<<num++<<": "<<sc<<endl;
    }
}
