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
ll sum( ll x)
{
	if(x<=9) return x;
	return x%10 + sum(x/10);
}
int main()
{
    //fast(); 
    ll a,b;
    cin>>a;
    for(ll i=0;i<=1000;i++)
	{
		if(sum(a+i) %4 == 0)
		{
			cout<<a+i<<endl;
			return 0;
		}
	}
	return 0;
}

