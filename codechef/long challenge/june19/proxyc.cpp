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
    ll T;
    cin>>T;
    while(T--)
    {
    	ll d;
    	cin>>d;
    	string s;
    	cin>>s;
    	ll n=0;
    	for(ll i=0;i<d;i++)
    		if(s[i]=='P') 
    			n++;
    	ll ans = ceil ( (3*d - 4*n)/4.0 );
    	ll pos=0;
    	for(ll i =2 ;i<d-2;i++)
    	{
    		if(s[i]=='A')
    		{
    			if( (s[i-1]=='P' || s[i-2]=='P') && (s[i+1]=='P' || s[i+2]=='P'))
    				pos++;
    		}
    	}
    	cout<< ( (ans > pos ) ? -1:max (ans,0ll) )<<endl;
    }
    
}
