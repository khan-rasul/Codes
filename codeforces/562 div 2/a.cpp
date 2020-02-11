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
    ll n,a,b,x,y;
    cin>>n>>a>>x>>b>>y;
    while(1)
    {
    	if(a==b)
    	{
    		cout<<"YES";
    		return 0;
    	}
    	if(a==x || b==y)
    		break;
    	if(a==n)
    	{
    		a=1;
    	}
    	else
    		a++;
    	if(b==1)
    	{
    		b=n;
    	}
    	else
    		b--;
    }
    cout<<"NO";
}
