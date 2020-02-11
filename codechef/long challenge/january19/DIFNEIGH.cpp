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
        ll n,m;
        cin>>n>>m;
        ll k;
        if(n>=3 && m>=3)
            k=4;
        else if(n==2 && m==2)
            k=2;
        else if(n>=2 && m>=2)
            k=3;
        else if((n==1 && m==1) || (n==1 && m==2) || (n==2 && m==1))
            k=1;
        else
            k=2;
        cout<<k<<endl;
        if(k==1)
        {
            for(ll i=0;i<n;i++)
            {
                for(ll j=0;j<m;j++)
                    cout<<"1 ";
                cout<<endl;
            }
        }
        else if(n==1 || m==1)
        {
            ll v=0,cnt=0;
            for(ll i=0;i<n;i++)
            {
                for(ll j=0;j<m;j++)
                {
                    cout<<v%k+1<<" ";
                    cnt++;
                    if(cnt%2==0)
                        v++;
                }
                cout<<endl;
            }
        }
        else if(m>2 && n>=2)
        {
            ll o=0,cnt=0;
            for(ll i=0;i<n;i++)
            {
                ll v=o;
                for(ll j=0;j<m;j++)
                {
                    cout<<o++%k+1<<" ";
                }
                cout<<endl;
                o=v;
                if(i%2)
                    o+=2;
                o%=k;
            }
        }
        else
        {
            for(ll i=0;i<n;i++)
            {
                for(ll j=0;j<m;j++)
                {
                    cout<<i%k+1<<" ";
                }
                cout<<endl;
            }
        }

    }
}
