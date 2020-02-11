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
vector<ll> st;
int main()
{
    //fast();
    ll n , m , k;
    cin>>n>>m>>k;
    st.resize(n);
    for(ll i = 0 ; i < n ; i++ )
    {
    	cin>>st[i];
    }
    ll arr[m + 2] = {0}, op[m][3]; 
    for(ll i = 0 ; i < m ; i++ )
    {
    	cin>>op[i][0]>>op[i][1]>>op[i][2];
    }
    while(k--)
    {
    	ll x , y;
    	cin>>x>>y;
    	x--;
    	arr[x]++;
    	arr[y]--;
    }
    for(ll i = 1 ; i < m ; i++)
    	arr[i] += arr[i - 1];
    ll pref[n + 2] = {0};
    for(ll i = 0 ; i < m ; i++)
    {
    	pref[ op[i][0] - 1 ] += arr[i]*op[i][2];
    	pref[ op[i][1] ] -= arr[i]*op[i][2];
    }
    st[0] += pref[0];
    for(ll i = 1 ; i < n ; i++)
    {
    	pref[i] += pref[i - 1];
    	st[i] += pref[i];
    }
    for(ll i = 0 ; i < n ; i++)
    	cout<<st[i]<<" ";
}
