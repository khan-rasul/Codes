/*-----lusar98-----*/
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
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,m;
    	cin>>n>>m;
    	vector<pair<ll,ll> > arr(m);
    	for(ll i=0;i<m;i++)
    		{
    			cin>>arr[i].ff;
    			arr[i].ss=i;
    		}
    	//sort(arr.begin(),arr.end());
    	ll foo[n][3];
    	ll freq[m+5]={0};
    	for(ll i=0;i<n;i++)
    	{
    		cin>>foo[i][0]>>foo[i][1]>>foo[i][2];
    		freq[foo[i][0]]++;
    	}
    	for(ll i = 0)
    }
}
