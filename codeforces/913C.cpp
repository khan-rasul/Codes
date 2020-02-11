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
    //fast();
    ll n , l;
    cin>>n>>l;
    ll arr[31];
    for(ll i = 0 ; i < 31 ; i++)
    arr[i] = 1ll<<60;
    for(ll i = 0 ; i < n ; i++ )
    	cin>>arr[i];
    for(ll i = 0 ; i < 31  ; i++ )
    {
    	arr[i + 1] = min(2 * arr[i] , arr[i + 1]);
    }
    ll lit[31] = {0}, v = 30 , cost = 0;
    while(l)
    {
    	lit[v] = l % 2;
    	cost += ( arr[30 - v--] * (l % 2) );
    	l /= 2;
    }
    ll sum = 0;
    for(ll i = 0 ; i < 31 ; i++)
    {
    	if(lit[i] == 0)
    	{
    		cost = min(cost , sum + arr[30 - i]);
    	}
    	else
    		sum += arr[30 - i];
    }
    cout<<cost<<endl;

}
