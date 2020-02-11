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
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    string s;
    cin>>s;
    ll dx=x2-x1,dy=y2-y1;
    //ll steps=min(abs(dx),abs(dy));
    ll ans=0;
    //double xinc=abs(dx)/(double)steps,yinc=abs(dy)/(double)steps;
    ll uc=dc=lc=rc=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='U') uc++;
        else if(s[i]=='D') dc++;
        else if(s[i]=='L') lc++;
        else rc++;
    }
    if(abs(dx) >= abs(dy))
    {
        ll steps=dy;
        if(dy>=0 && dx>=0)
        {

        }
    }
}
