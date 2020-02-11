/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf 1ll<<60
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
vector< vector< pair< ll , ll > > > st;
vector< pair< ll , ll > > foo;
ll n ; 
struct compare { 
    bool operator()(const pair<int, int>& value,  const int& key) 
    { 
        return (value.first < key); 
    } 
    bool operator()(const int& key,  const pair<int, int>& value) 
    { 
        return (key < value.first); 
    } 
}; 
vector<pair<ll,ll>> un(vector<pair<ll,ll>> a, vector<pair<ll,ll>> b)
{
	vector<pair<ll,ll>> res;
	if(a.empty()) return b;
	if(b.empty()) return a;
	ll x = lower_bound(a.begin() , a.end() , b[0].ss, compare()) - a.begin();
	for(ll m = 0 ; m < x ; m++ )
	{
		res.pb(a[m]);
	}
	if(x >= a.size())
	{
		res.pb(b[0]);
	}
	else
	{
		res.pb( { b[0].ff , min(b[0].ss , a[x].ss ) });
	}
	for(ll m = 1 ; m < b.size() ; m++)
	{
		res.pb(b[m]);
	}
	return res;
}
void build(ll p , ll i , ll j)
{
	ll left = p<<1 ;
	ll right = (p<<1) + 1 ;
	if(i == j)
	{
		st[p].pb(foo[i]) ;
		return;
	}
	build(left, i , (i + j) / 2);
	build(right, (i + j)/2 + 1 , j);
	st[p] = un(st[left] , st[right]);
	return;	
}

vector<pair<ll,ll>>  query(ll p , ll i , ll j , ll l , ll r)
{
	if( r < i || l > j) return vector<pair<ll,ll>>(); 
	if( l <= i && j <= r) return st[p];
	ll left = p<<1;
	ll right = (p<<1) + 1;
	return un( query(left , i , (i + j) / 2 , l ,r) , query(right , (i + j) / 2 + 1 , j , l, r) );

} 
int main()
{
    //fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	foo.clear();
    	st.clear();
    	foo.resize(n);
    	st.resize(4 * n); 
    	for(ll i = 0 ; i < n ; i++)
    	{
    		cin>>foo[i].ss>>foo[i].ff;
    	}
    	sort(foo.begin(), foo.end());

    	build(1 , 0 , n - 1);
    	ll ans = max(query(1 , 0 , n - 1 , 1 , n - 1 ).size() , query(1 , 0 , n - 1 , 0, n -2).size() );
    	for(ll i = 1 ; i < n - 1 ; i++ )
    	{
    		ll temp = un( query(1 , 0 , n - 1 , 0 , i - 1) , query(1 , 0 , n - 1 , i + 1 , n - 1)).size();
    		ans = max(ans , temp);
    	}
    	cout<<ans<<endl;
    }
}
