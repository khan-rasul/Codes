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
    ll n , l , r;
    cin>> n >> l >> r;
    ll less = (1<<l) - 1 + (n-l) ;
    ll most = (1<<r) - 1 + (n-r) * (1<<(r-1));
    cout<<less<<" "<<most<<endl;
    
}