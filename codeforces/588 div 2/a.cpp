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
ll arr[4], sum = 0;
bool solve(ll i , ll s )
{
	if(i >=4 ) return false;
	if( 2*s == sum) return true;
	return solve(i + 1 , s) || solve(i+1 , s + arr[i]);
}
int main()
{
    //fast();
    for(ll i = 0 ; i < 4; i++)
    	{cin>>arr[i]; sum+=arr[i];}
    cout<< ( solve(0 , 0) ? "YES" : "NO" )<<endl;

}
