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
    ll n, k;
    cin>>n>>k;
    ll a= (2*n+3) , b =(n+1) * n - 2*k;
    ll p = a - sqrt(a*a - 4*b) , q =a + sqrt(a*a - 4*b) ;
    p/=2;q/=2;
    if( (n-q)*(n-q+1)/2 == k-q )
    {
    	cout<<q<<endl;
    }
    else
    	cout<<p<<endl;
}
