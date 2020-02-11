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
    string l,r;
    cin>>l>>r;
    map<char,deque<ll> > left,right;
    for(ll i=0;i<n;i++)
    {
        left[l[i]].pb(i+1);
        right[r[i]].pb(i+1);
    }
    ll ans=0, partl=0,partr=0;
    for(ll i=0;i<26;i++)
    {
        ans=ans+( min( left['a'+i].size() , right['a'+i].size() ) );
        partl+= (left['a'+i].size() - min( left['a'+i].size() , right['a'+i].size() ));
        partr+= (right['a'+i].size() - min( left['a'+i].size() , right['a'+i].size() ));

    }
    //ans+=( min( left['?'].size() , right['?'].size() ) );
    ans+=min(partl,(ll)right['?'].size());
    ans+=min(partr,(ll)left['?'].size());
    ans+=(min( (ll)left['?'].size() - min(partr,(ll)left['?'].size()),
                  (ll)right['?'].size() - min(partl,(ll)right['?'].size()) ));
    cout<<ans<<endl;
    if(ans)
    {
        for(ll i=0;i<26;i++)
        {
            while((ll)min( left['a'+i].size() , right['a'+i].size() ) )
            {
                cout<<left['a'+i][0]<<" "<<right['a'+i][0]<<endl;
                left['a'+i].pop_front();
                right['a'+i].pop_front();
            }
        }
        ll v='a';
        while( (ll)min(partr,(ll)left['?'].size()) )
        {
            while(v<='z' && right[v].size()==0 ) v++;
            if(v>'z') break;
            cout<<left['?'][0]<<" "<<right[v][0]<<endl;
            left['?'].pop_front();
            right[v].pop_front();
            partr--;
        }
        v='a';
        while( (ll)min(partl,(ll)right['?'].size()))
        {
            while(v<='z' && left[v].size()==0) v++;
            if(v>'z') break;
            cout<<left[v][0]<<" "<<right['?'][0]<<endl;
            left[v].pop_front();
            right['?'].pop_front();
            partl--;
        }
        while( (ll)min( left['?'].size() , right['?'].size() ))
            {
                cout<<left['?'][0]<<" "<<right['?'][0]<<endl;
                left['?'].pop_front();
                right['?'].pop_front();
            }

    }
}
