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
ll arr[(ll)1e6][27];
ll test[27];
bool check(ll mid)
{
	for( ll i=0; i<26 ; i++)
		if(test[i] > arr[mid][i])
			return false;
	return true;
}
int main()
{
    //fast();
    ll n;
    cin>>n;
    string s;
    cin>>s;
    memset(arr, 0 ,sizeof arr);
    for(ll i=0; i<n;i++)
   	{
   		if(i)
   		for(ll j =0 ; j<26;j++)
   			arr[i][j] =arr[i-1][j];
   		arr[i][s[i] - 'a']++;
   	}
    ll m;
    cin>>m;
    while(m--)
    {
    	string t;
    	cin>>t;
    	memset(test , 0, sizeof test);
    	for(ll i=0; i<t.length();i++)
    		test[t[i] - 'a']++;
    	ll lo =0 , hi =n-1,pre=-1;
    	while(lo<hi)
    	{
    		ll mid = (lo+hi)/2;
    		if(pre == mid) break;
    		if(check(mid))
    			hi =mid;
    		else lo =mid;
    		pre =mid;
    	} 
    	cout<<( check(lo)?lo:hi ) +1<<endl;
    }
}
