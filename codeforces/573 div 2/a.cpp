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
    ll x;
    cin>>x;
    x%=4;
    if(x== 1)
    {
    	cout<<"0 A";
    }
    if( x==2)
    {
    	cout<<"1 B";
    }
    if(x == 3)
    {
    	cout<<"2 A";
    }
    if(x == 0)
    {
    	cout<<"1 A";
    }
}
