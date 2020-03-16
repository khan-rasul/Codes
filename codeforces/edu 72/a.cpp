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
    // fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll s , i , e;
    	cin>>s>>i>>e;
    	ll l = 0 , r = e;
    	ll x , pre = -1;
    	while(l < r )
    	{
    		x = (l+r)/2;
    		if(pre == x) break;
    		if(s+x > i + ( e - x ))
    			r = x;
    		else
    			l = x;
    		pre = x;
    	}
    	if(s + l > i + ( e - l))
    		cout<< e - (l - 1);
    	else if( s + r > i + ( e - r))
    		cout<< e - r + 1;
    	else
    		cout<<"0";
    	cout<<endl;
    }
}
