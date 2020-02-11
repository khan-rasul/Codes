/*company merger*/
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
vector<ll> foo[6] , mer;
ll n , m;
ll ans = 0;
void solve(ll i, ll mask)
{
	if(i >= n )
	{
		// process
		unordered_map<ll ,ll > check;
		bitset<1000000> flag;
		ll temp = 0;
		for(ll j = 0 ; j < (ll)mer.size() ; j++ )
		{
			flag.set();
			temp |= mer[j] ;
			for(ll k = 0 ; k < n ; k++)
			{
				if(mer[j] & (1 << k ))
				{
					for(ll l = 0 ; l < foo[k].size() ; l++ )
					{
						check[ foo[k][l] ] += (flag[ foo[k][l] ] ? 1 : 0 );
						flag[foo[k][l]] = 0;
					}
				}
			}
		}
		if(temp != (1 << n) - 1) return ;
		for(auto x : check)
			if(x.ss >= 3 ) return;
		ans = max(ans , (ll)mer.size() );
		return;
	}
	mer.pb(mask);
	solve(i + 1 , (1 << (i + 1) ) );
	mer.pop_back();
	solve(i + 1 , mask | (1 << (i + 1)) );
}
int main()
{
    //fast();
    cin>>n>>m;
    for(ll i = 0 ; i < n ; i++)
    {
    	for(ll j = 0 ; j < m ; j++ )
    	{
    		ll x;
    		cin>>x;
    		foo[i].pb(x);
    	}
    }
    solve( 0 , 1) ;
    cout<< n - ans <<endl;
}
