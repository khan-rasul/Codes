/*-----lusar98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
using namespace std;
int main()
{
    //fast();
    ll n , m;
    cin>>n>>m;
    ll arr[n][m];
    for(ll i=0;i<n;i++)
    	for(ll j=0;j<m;j++)
    		cin>>arr[i][j];
    ll foo[n]={0};
    ll sum=0;
    for(ll i=0;i<n;i++)
    	sum= sum^arr[i][0];
    for(ll i=0;i<n;i++)
    {
    	if(sum)
    	{
    		cout<<"TAK\n";
    		for(ll j=0;j<n;j++)
    			cout<<foo[j]+1<<" ";
    		cout<<endl;
    		return 0;
    	}
    	else
    	{
    		for(ll j=1 ;j<m;j++)
    		{
    			if(arr[i][j]!=arr[i][0])
    			{
    				sum=1;
    				foo[i]=j;
    				break;
    			}
    		}
    	}
    }
    if(sum)
	{
		cout<<"TAK\n";
		for(ll j=0;j<n;j++)
			cout<<foo[j]+1<<" ";
		cout<<endl;
		return 0;
	}
    cout<<"NIE\n";
}
