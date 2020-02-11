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
ll dr[]={0,0,1,-1};
ll dc[]={1,-1,0,0};
int main()
{
    //fast();
    ll n;
    cin>>n;
    string arr[n];
    char brr[n][n];
    ll r1,c1,r2,c2;
    cin>>r1>>c1;
    cin>>r2>>c2;
    r1--;r2--;c1--;c2--;
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    queue<pair<ll,ll> > s,t;
    s.push({r1,c1});
    ll ans=1e9;
    while(!s.empty())
    {
        pair<ll,ll> u=s.front();s.pop();
        t.push({r2,c2});
        for(ll i=0;i<n;i++)
            for(ll j=0;j<n;j++)
            brr[i][j]='0';
        arr[u.ff][u.ss]='1';
        while(!t.empty())
        {
            pair<ll,ll> v=t.front();t.pop();
            ans=min(ans,(ll)pow(v.ff-u.ff,2)+(ll)pow(v.ss-u.ss,2));
            brr[v.ff][v.ss]='1';
            for(ll i=0;i<4;i++)
            {
                if(v.ff+dr[i]>=0 && v.ff+dr[i]<n && v.ss+dc[i]>=0 && v.ss+dc[i]<n)
                if(brr[v.ff+dr[i]][v.ss+dc[i]]=='0' && arr[v.ff+dr[i]][v.ss+dc[i]]=='0')
                {
                    t.push({v.ff+dr[i],v.ss+dc[i]});
                    brr[v.ff+dr[i]][v.ss+dc[i]]='1';
                }
            }
        }
        for(ll i=0;i<4;i++)
        {
            if(u.ff+dr[i]>=0 && u.ff+dr[i]<n && u.ss+dc[i]>=0 && u.ss+dc[i]<n)
            if(arr[u.ff+dr[i]][u.ss+dc[i]]=='0')
            {
                s.push({u.ff+dr[i],u.ss+dc[i]});
                arr[u.ff+dr[i]][u.ss+dc[i]]='1';
            }
        }
    }
    cout<<ans<<endl;
}
