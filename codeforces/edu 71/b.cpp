#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main()
{
	ll n , m;
	cin>>n >> m ;
	ll arr[n][m] , brr[n][m];
	memset(brr , 0 ,sizeof brr);
	for(ll i = 0; i< n ; i++)
		for(ll j = 0; j< m ;j++)
			cin>>arr[i][j];
	vector<pair<ll,ll> > ans;
	for(ll i = n-1 ; i>= 0 ;i-- )
	{
		for(ll j = m-1 ;j>=0 ;j--)
		{
			if(arr[i][j]  )
			{
				if(i-1 >=0 && j-1>=0 && (arr[i-1][j-1] && arr[i -1][j] && arr[i][j-1]) )
				{
					brr[i-1][j-1] = brr[i][j-1] = brr[i-1][j] = brr[i][j] = 1;
					ans.pb({i-1,j-1});
				}
			}
		}
	}
	for(ll i = 0; i< n ; i++)
		for(ll j = 0; j< m ;j++)
			if(arr[i][j] != brr[i][j] )
			{
				cout<<"-1\n";
				return 0;
			}
	cout<<ans.size()<<endl;
	for(ll i= 0; i < ans.size() ; i++)
	{
		cout<<ans[i].ff +1<<" "<<ans[i].ss + 1<<endl;
	}
}