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
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll arr[n] , m = 0;
    	for(ll i =0 ; i < n ; i++)
    		{cin>>arr[i];  m +=arr[i]; }
    	ll sum = 0, ans =0 , l = 0 , r = 0;
    	for( ll i = 0 ; i < n ; i++)
    	{
    		sum +=arr[i];
    		if(ans < sum)
    		{
    			ans = sum;
    			r = i;
    		}
    		if(sum <= 0 ) {sum = 0 ; l = i + 1 ; r = i + 1 ; }

    	}
    	if(ans > m || (ans == m && (l != 0 || r!= n - 1) ) ) 
    		cout<<"NO";
    	else cout<<"YES";
    	cout<<endl;
    }

}
