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
    map<ll,ll> foo;
    for(ll i=0;i<n*n;i++)
    {
        ll x;
        cin>>x;
        foo[x]++;
    }
    vector<pair<ll,ll> > bar,bar1;
    for(map<ll,ll>::iterator it=foo.begin();it!=foo.end();it++)
    {
        bar.pb({it->ss,it->ff});
    }
    sort(bar.rbegin(),bar.rend());
    bar1=bar;
    ll x=0,s=0;
    while(x<bar1.size() && bar1[x].ff>=4 && s<(n/2)*(n/2))
    {
        bar1[x].ff-=4;
        s++;
        while(x<bar1.size() && bar1[x].ff<4 ) x++;
    }
    if(s!=(n/2)*(n/2))
    {
        cout<<"NO";
        return 0;
    }
    if(n%2==1)
    {
        sort(bar1.rbegin(),bar1.rend());
        s=0;x=0;
        while(x<bar1.size() && bar1[x].ff>=2 && s<(2*(n/2)))
        {
            bar1[x].ff-=2;
            s++;
            while(x<bar1.size() && bar1[x].ff<2 ) x++;
        }
        if(s!=2*(n/2))
        {
            cout<<"NO";
            return 0;
        }
    }
    ll arr[n][n],v=0;
    ll m=bar.size();
    memset(arr,0,sizeof arr);
    for(ll i=0;i<=n/2-1;i++)
    {
        for(ll j=0;j<=n/2-1;j++)
        {
            while(bar[v].ff<4) v=(v+1)%m;
            if(bar[v].ff>=4)
            {
                arr[i][j]=bar[v].ss;
                arr[n-i-1][n-j-1]=bar[v].ss;;
                arr[n-i-1][j]=arr[i][n-j-1]=bar[v].ss;
                bar[v].ff-=4;
            }

        }
    }
    if(n%2==1)
    {
        v=0;
        for(;v<m;v++)
        {
            if(bar[v].ff%2==1)
                break;
        }
        arr[n/2][n/2]=bar[v].ss;
        bar[v].ff--;
        for(ll j=0;j<=n/2-1;j++)
        {
            while(bar[v].ff<2) v=(v+1)%m;
            //cout<<"hello ";
            if(bar[v].ff>=2)
            {
                arr[n/2][j]=arr[n/2][n-j-1]=bar[v].ss;
                bar[v].ff-=2;
            }
            while(bar[v].ff<2) v=(v+1)%m;
            //cout<<"hello1 ";
            if(bar[v].ff>=2)
            {
                arr[j][n/2]=arr[n-j-1][n/2]=bar[v].ss;
                bar[v].ff-=2;
            }
            //while(bar[v].ff<2) v=(v+1)%m;
            //cout<<"hello2 ";
        }
    }
    //for(ll i=0;i<m;i++) cout<<bar[i].ff<<" ";
    cout<<"YES\n";
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
