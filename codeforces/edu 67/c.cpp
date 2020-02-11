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
    ll n,m; 
    cin>>n>>m;
    ll arr[n+1] = {0};
    vector<pair<ll,ll> > one,zero;
    while(m--)
    {
    	ll t,l,r;
    	cin>>t>>l>>r;
    	t?one.pb({l,r}) : zero.pb({l,r});
    }
    for(ll i=1;i<=n;i++) arr[i]= n-i +1;
    sort(one.begin(),one.end());
    for(ll i=0 ; i<one.size();i++)
    {
    	for(ll j = one[i].ff +1 ; j<= one[i].ss;j++)
    		arr[j]=arr[j-1];
    }
    ll flag =0;
    for(ll i=0 ; i<zero.size() ;i++)
    {
    	for(ll j = zero[i].ff  ; j< zero[i].ss;j++)
    		if(arr[j]>arr[j+1])
    		{
                flag++;
    			break;
    		}	
    }
    if(flag < zero.size())
    {
    	cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
        for(ll i=1; i <=n;i++)
        cout<<arr[i]<<" ";
    }
}
