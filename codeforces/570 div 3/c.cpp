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
    	ll k,n,a,b;
    	cin>>k>>n>>a>>b;
    	if(k-b*n <=0)
    		{cout<<"-1\n"; continue;}
    	ll x = (k-b*n)/(a-b) - ( ((k-b*n)%(a-b))?0:1 );
    	
		
    		cout<<min(x,n)<<endl;
    }  
}
