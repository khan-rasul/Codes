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
ll n;
ll memo[105][105][105][2];
vector<ll> arr;
ll solve(ll i , ll o , ll e, ll last)
{
	ll ans = mod;
	if(o < 0 || e < 0) 
		return mod;
	if(i >= n )
		return 0;
	
	if(memo[i][o][e][last] != -1)
		return memo[i][o][e][last];

	if(arr[i] == 0)
	{
		ans = min( (i == 0 ? 0 :  last ^ 0) + solve(i + 1 , o  , e - 1, 0) ,
					(i == 0 ? 0 :  last ^ 1) + solve(i + 1 , o - 1  , e , 1)  );
	}
	else ans = ( (i == 0 ? 0 :  (last ^ arr[i]) % 2) + solve(i + 1 , o  , e , arr[i] % 2) );
	return memo[i][o][e][last] = ans;
}
int main()
{
    //fast();
    memset(memo , -1 , sizeof memo); 
    cin>>n;
    arr.resize(n);
    ll o = (n + 1) / 2 , e = n / 2, p = -1;
    for(ll i = 0 ; i<n ; i++)
	{
		cin>>arr[i];
		if(arr[i] != 0)
		(arr[i] % 2) ? o-- : e-- ; 
	}
	ll ans = solve(0 , o , e , 0);
	
	cout<<ans<<endl;
}
