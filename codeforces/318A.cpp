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
    ll k , n ;
    cin>> n >> k;
    if( k > ( (n+1) / 2))
    {
    	cout<<2*(k - ( (n+1) / 2))<<endl;
    }
    else
    	cout<<(2*k - 1)<<endl;
    
}
