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
    ll n ; 
    cin>>n;
    ll arr[n];
    map<ll,ll> foo;
    for(ll i = 0 ; i< n ; i++)
    {
    	cin>>arr[i];
    	foo[arr[i] ]++;
    }
    sort(arr,arr+n);
    ll move =0;
    for(ll i =0 ; i < n ; i++)
    	move+=max((arr[i] - i) , 0ll );
    ll p =0,cnt=0;
    if(foo.begin()->ff == 0 && foo.begin() ->ss >=2) p =1;
    for( auto it = foo.begin(); it!=foo.end() && !p; it++)
    {
    	auto temp =it;
    	if(it->ss == 2 )
    	{
if(arr[0] == it->ff)
{cnt++; continue;}
    		temp--;
    		if(temp->ff == (it->ff) -1)
    			p =1;
            cnt++;
    	}
    	if(it->ss >=3) p=1;
if(cnt>1) p=1;
    }
    if(p == 1)
    {
    	    	cout<<"cslnb";
//cout<<p;
    	    	return 0;
    }
    if(move %2)
    {
    	cout<<"sjfnb";
    }
    else
    	cout<<"cslnb";
 
}