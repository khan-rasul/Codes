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
    ll num = 1;
    while(t--)
    {
    	string a , b ;
    	cin>>a>>b;
    	for(ll i = 0 ; i < a.length() - 1 ; i++)
    	{
    		ll j , m = i + 1;
    		for(j = i + 2 ; j < a.length() ; j++)
    		{
    			if(a[j] <= a[m])
    				m = j;
    		}
    		if(a[m] < a[i])
    			{swap(a[i] , a[m]); break;}
    	}
    	if(a < b)
    		cout<<a;
    	else
    		cout<<"---";
    	cout<<endl;
    }
}
