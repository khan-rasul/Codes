/*
* What did I just do?
*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf ((ll)1e18)
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
int main()
{
    // fast();
    ll q;
    cin>>q;
    while(q--)
    {
    	ll h , n;
    	cin >> h >> n ;
    	ll arr[n + 2];
    	for(ll i = 0 ; i < n ; i++ )
    	{
    		cin >> arr[i];
    	}
    	arr[n] = 0;
    	ll ans = 0 , i = 0; 
    	while(i < n)
    	{
    		if(arr[i + 1] == 0)
    			break;
    		if(arr[i + 1] - arr[i + 2] != 1)
    			ans++;
    		else i++;
    		i++;
    	}
    	cout<<ans<<endl;
    }
}
