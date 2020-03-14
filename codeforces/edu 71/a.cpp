#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll b,p,f;
		cin>>b>>p>>f;
		ll h,c;
		cin>>h>>c;
		cout << max( h * min(b/2 , p) + c * min( max((b - 2*p) /2 , 0ll ), f ) , c * min(b/2 , f) + h * min( max( (b - 2*f) /2 ,0ll), p))<<endl;
	}
}