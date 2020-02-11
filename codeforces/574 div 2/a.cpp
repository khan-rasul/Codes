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
    ll n , k;
    cin>>n>>k;
    ll arr[n], freq[1005] ={0};
    for(ll i=0 ; i< n ; i++)
    {
    	cin>>arr[i];
    	freq[arr[i]]++;
    }
    ll ans =0,set =0,lo=0;
    for(ll i = 0 ; i <= k && set<= ceil((double)n/2); i++)
    {
    	ans+=2*(freq[i]/2);
    	set+=(freq[i]/2);
    	lo+=(freq[i]%2);
    }
    cout<<ans + min( ( (ll)ceil( (double)n/2 ) - set) , lo ) <<endl;
    
}
