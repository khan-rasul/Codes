/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
int main()
{
    fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll q;
    	cin>>q;
    	set<ll> foo;
        ll ev =0 , od=0;
    	while(q--)
    	{
    		ll x;
    		cin>>x;
            if(!foo.count(x))
    		{
                for(auto y: foo)
                {
                    if( !foo.count(y^x) )
                    {
                        (__builtin_popcount( y^x) %2) ? od++:ev++;
                    }
                }
                for(auto y: foo)
                {
                    foo.insert( y^x);
                }
                (__builtin_popcount( x) %2) ? od++:ev++;
                foo.insert(x);    
            }		
            cout<<ev<<" "<<od<<endl;
    	}
    }
}
