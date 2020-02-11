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
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n , k;
    	cin>>n>>k;
    	ll m = (k == 3? 4: 3);
    	if(m == 3 && k % 3 == 0)
    	{
    		if(n<k)
    		{
    			if(n%3 == 0)
    				cout<<"Bob\n";
    			else
    				cout<<"Alice\n";
    		}
    		else if(n == k)
    		{
    			cout<<"Alice\n";
    		}
    		else
    		{
    			n %= (k+1);
    			if(n == k)
	    		{
	    			cout<<"Alice\n";
	    		}
    			else if(n%3 == 0)
    				cout<<"Bob\n";
    			else
    				cout<<"Alice\n";
    		}
    	}
    	else 
    	{
    		if(n%m == 0 )
				cout<<"Bob\n";
			else
				cout<<"Alice\n";
    	}
    }
}