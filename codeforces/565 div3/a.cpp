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
    ll q;
    cin>>q;
    while(q--)
    {
    	ll n;
    	cin>>n;
    	ll ans=0,flag=0;
    	while(n!=1)
    	{
    		if(n%2==0)
    			{
    				n=n/2;
    				ans++;
    			}
    		else if(n%3==0)
    			{
    				n=2*n/3;
    				ans++;
    			}
    		else if(n%5==0)
    			{
    				n=4*n/5;
    				ans++;
    			}
    		else
    		{
    			flag=1;
    			break;
    		}
    	}
    	cout<<(flag?-1:ans)<<endl;
    }
}
