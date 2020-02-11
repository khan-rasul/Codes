/*-----lusar98-----*/
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
    ll n,m;
    cin>>n>>m;
    ll u=1,d=n;
    while(u<d)
    {
    	for(ll i=0;i<m;i++)
    	{
    		cout<<u<<" "<<(i+1)<<endl;
    		cout<<d<<" "<<(m-i)<<endl;
    	}
    	u++;d--;
    }
    if(u==d)
    {
    	ll l=1,r=m;
    	while(l<r)
    	{
    		cout<<u<<" "<<l<<endl;
    		cout<<u<<" "<<r<<endl;
    		l++;
    		r--;
    	}
    	if(l==r)
    		cout<<u<<" "<<l<<endl;
    }
}
