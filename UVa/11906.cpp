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
int main()
{
    //fast();
    ll T,num=1;
    cin>>T;
    while(T--)
    {
        ll r,c,m,n,k=8;
        cin>>r>>c>>m>>n;
        ll dr[]={ m ,  m, -m, -m,  n,  n, -n, -n };
        ll dc[]={ n , -n,  n, -n,  m, -m,  m, -m };
        if(!n || !m || m==n)
            k=4;
        if(k==4)
        {
            if(!m)
            {
                dr[2]=n,dr[3]=-n;
                dc[2]=0,dc[3]=0;
            }
            else if(!n)
            {
                dr[1]=0,dr[2]=0;
                dc[1]=m,dc[2]=-m;
            }
        }

        ll grid[r][c];
        memset(grid,0,sizeof grid);
        ll w;
        cin>>w;
        for(ll i=0;i<w;i++)
        {
            ll x,y;
            cin>>x>>y;
            grid[x][y]=-1;
        }
        queue<pair<ll,ll> > sq;
        ll even=0,odd=0;
        sq.push({0,0});
        while(!sq.empty())
        {
            pair<ll,ll> t=sq.front(); sq.pop();
            if(grid[t.ff][t.ss]!=0) continue;
            for(ll i=0;i<k;i++)
            {
                if(!((t.ff+dr[i])<0 || (t.ff+dr[i])>=r || (t.ss+dc[i])<0 || (t.ss+dc[i])>=c || grid[t.ff+dr[i]][t.ss+dc[i]]==-1))
                {
                    grid[t.ff][t.ss]++;
                    if(grid[t.ff+dr[i]][t.ss+dc[i]]==0)
                    sq.push({t.ff+dr[i],t.ss+dc[i]});
                }
            }
            (grid[t.ff][t.ss]%2)?odd++:even++;
        }
        cout<<"Case "<<num++<<": "<<even<<" "<<odd<<endl;
    }
}
