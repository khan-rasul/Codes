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
    ll n;
    cin>>n;
    n -= 10 ;
    if( n > 11 || n == 0)
    	cout<<0<<endl; 
    else if((n >= 1 && n < 10) || n == 11 )
    	cout<<4<<endl;
    else if(n == 10)
    	cout<<15<<endl;
    else cout<<0<<endl;
}	
