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
    	ll n,m;
    	cin>>n;
    	m = n;
    	ll sum=0;
    	while(m)
    	{
    		sum += (m % 10);
    		m/=10;
    	}
    	cout<<n<<( 10 - (sum % 10) ) %10<<endl;
    }
    
}
