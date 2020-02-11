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
    stack<char> foo;
    ll n,flag=1;
    cin>>n;
    string s;
    cin>>s;
    ll m=0;
    for( ll i=0;i<n;i++)
    {
        if(s[i]=='(')
            m++;
        else if( s[i]==')')
            m--;
    }
    if(s[0]!=')')
    {
        if(s[0]=='?') m++;
        s[0]='(';
        foo.push(s[0]);
    }
    else
    {
        flag=0;
    }
    for(ll i=1; i < n-1 && flag;i++)
    {
        if(foo.empty())
        {
            flag=0;
            break;
        }
        if(s[i]=='(')
        {
            foo.push(s[i]);
        }
        else if(s[i]==')')
        {
            foo.pop();
        }
        else
        {
            if(foo.size()==1 || m<=0)
            {
                s[i]='(';
                foo.push(s[i]);
                m++;
            }
            else
            {
                s[i]=')';
                foo.pop();
                m--;
            }
        }
    }
    if(flag && s[n-1]!='(')
    {
        if(s[n-1]=='?')m--;
        s[n-1]=')';
        foo.pop();
    }
    else
    {
        flag =0;
    }
    if(!foo.empty() || !flag || n%2==1)
    {
        cout<<":(\n";
    }
    else
        cout<<s<<"\n";
}
