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
ll num(string s)
{
    ll n=0,pow=1;
    for(ll i=s.length()-1;i>=0;i--)
    {
        n+=pow*(s[i]-'0');
        pow*=10;
    }
    return n;
}
bool isprime(ll num)
{
    if(num==1) return false;
    for(ll i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}
int main()
{
    //fast();
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll ans=0;
        for( ll i=1;i< (1ll << s.length() ) ;i++)
        {
            string p="";
            for(ll j=0;j<s.length();j++)
            {
                if(i & 1<<j )
                    p+=s[j];
            }
            if(p[0]!='0')
            {
                if(isprime(num(p)))
                    ans++;
            }
        }
        cout<<ans<<endl;
    }
}
