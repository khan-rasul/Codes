/*
* Fingers Crossed
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
    ll t;
    cin>>t;
    while(t--)
    {
    	string a , b , c;
    	cin>>a>>b>>c;
    	ll flag = 1;
    	for(ll i = 0 ; i < a.length() ; i++ )
    	{
    		if(a[i] != c[i] && b[i] != c[i])
    		{
    			flag = 0;
    			break;
    		}
    	}
    	cout<<(flag? "YES" : "NO")<<endl;
    }
}
