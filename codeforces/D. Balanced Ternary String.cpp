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
    string s;
    cin>>s;
    ll zero=n/3,one=n/3,two=n/3;
    ll a=0,b=0,c=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='0')
            a++;
        else if(s[i]=='1')
        b++;
        else
            c++;
    }
    a-=zero;b-=one;c-=two;
    for(ll i=0;i<n && a<0;i++)
    {
        if(s[i]!='0')
        {
            if(s[i]=='1' && b>0)
            {
                b--;
                a++;
                s[i]='0';
            }
            else if(s[i]=='2' && c>0)
            {
                c--;
                a++;
                s[i]='0';
            }
        }
    }
    for(ll i=0;i<n && b<0;i++)
    {
        if(s[i]!='1')
        {
            if(s[i]=='0' && a>0)
            {
                a--;
                b++;
                s[i]='1';
            }
            else if(s[i]=='2' && c>0)
            {
                c--;
                a++;
                s[i]='0';
            }
        }
    }
    for(ll i=n-1;i>=0 && c<0;i--)
    {
        if(s[i]!='2')
        {
            if(s[i]=='1' && b>0)
            {
                b--;
                c++;
                s[i]=='2';
            }
            else if(s[i]=='0' && a>0)
            {
                a--;
                c++;
                s[i]=='2';
            }
        }
    }
    cout<<s<<endl;
}
