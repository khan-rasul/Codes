/*-----lusar_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
using namespace std;
pair<ll,ll> dir(ll c)
{
    switch(c)
        {
            case 0:
                return {-1,0};
            case 1:
                return {0,1};
            case 2:
                return {1,0};
            case 3:
                return {0,-1};
        }
}
int main()
{
    //fast();
    ll n,m,s;
    while(cin>>n>>m>>s,n)
    {
        string grid[n];
        ll a=-1,b=-1;
        ll c;
        for(ll i=0;i<n;i++)
        {
            cin>>grid[i];
            for(ll j=0;j<m && a==-1;j++)
            {
                if(grid[i][j]=='N' || grid[i][j]=='S' || grid[i][j]=='L' || grid[i][j]=='O')
                    a=i,b=j,c=grid[i][j];
            }
        }
        pair<ll,ll> mo;
        switch(c)
        {
            case 'N':
                c=0;
                break;
            case 'L':
                c=1;
                break;
            case 'S':
                c=2;
                break;
            case 'O':
                c=3;
                break;
        }
        string ins;
        cin>>ins;
        ll ans=0;
        for(ll i=0;i<s;i++)
        {
            if(ins[i]=='D')
            {
                c=(c+1)%4;
            }
            else if(ins[i]=='E')
            {
                c=(c-1)%4;
                if(c<0) c+=4;
            }
            else
            {
                mo=dir(c);
                if(!(a+mo.ff>=n || a+mo.ff<0 || b+mo.ss>=m || b+mo.ss<0 || grid[a+mo.ff][b+mo.ss]=='#'))
                {
                        if(grid[a+mo.ff][b+mo.ss]=='*')
                        {
                            ans++;
                            grid[a+mo.ff][b+mo.ss]='.';
                        }
                        a=a+mo.ff;
                        b=b+mo.ss;
                }
            }
        }
        cout<<ans<<endl;
    }
}
