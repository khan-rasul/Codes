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
vector<ll> summation(vector<ll> a, vector<ll> b , ll p)
{
	vector<ll> res(a.size());
	for(ll i = 0 ; i < a.size() ; i++)
	{
		res[i] = a[i] + p * b[i];
	}
	return res;
}
int main()
{
    //fast();
    ll n , q , c;
    cin>>n>>q>>c;
    vector<ll> arr[105][105];
    vector<ll> temp(c + 1);
    //initialize
    for(ll i = 0 ; i < 105 ; i++)
    	for(ll j = 0 ; j < 105 ; j++)
    		arr[i][j] = temp;
    //input
    for(ll i = 0 ; i < n ; i++)
    {
    	ll x , y, s;
    	cin>>x>>y>>s;
    	for(ll j = 0 ; j <= c ; j++)
    		temp[j] = (s + j) % (c + 1);
    	arr[x][y] = summation(arr[x][y] , temp , 1);
    }
    //precalculate for rectangle (0,0) to (i,j)
    for(ll i = 1 ; i < 105 ; i++)
    {
    	for(ll j = 1 ; j < 105 ; j++)
    	{
    		// arr[i][j] = arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
    		arr[i][j] = summation( arr[i][j] , summation(summation(arr[i - 1][j] , arr[i][j - 1] , 1) ,  arr[i - 1][j - 1] , -1) , 1);
    	}
    }
    // for(ll i = 0 ; i <= 104 ; i++)
    // {
    // 	for(ll j = 0 ; j <= 104 ; j++)
    // 	{
    // 		cout<<" ( ";
    // 		for(ll k = 0 ; k <= c ; k++)
    // 			cout<<arr[i][j][k]<<" ";
    // 		cout<<") ";
    // 	}
    // 	cout<<endl;
    // }
    //solve queries
    while(q--)
    {
    	ll x1 , y1 , x2 ,y2 ,t;
    	cin>>t>>x1>>y1>>x2>>y2;
    	vector<ll> ans = summation(summation( arr[x2][y2] , summation(arr[x2][y1 - 1] , arr[x1 - 1][y2] , 1 ) , -1) , arr[x1 - 1][y1 - 1] , 1);
   		// for(ll i = 0 ; i <= c ; i++)
   		// 	cout<<ans[i]<<" ";
   		// cout<<endl;
   		cout<<ans[ t % (c + 1)]<<endl;
    }
}
