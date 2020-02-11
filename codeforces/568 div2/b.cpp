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
    ll n;
    cin>>n;
    while(n--)
    {
    	string a,b;
    	cin>>a>>b;
    	ll x=0,y=0,px=0,py=0;
    	ll p=1,q=1,flag=1;
    	while(1)
    	{
    		while(x<a.length()-1 && a[x++] == a[x])
    			p++;
    		while(y<b.length()-1 && b[y++]==b[y])
    			q++;
			if((a[px] != b[py]) || (q<p) )
			{
				flag=0;
				break;
			}
			px=x;py=y;
    		p =1; q=1;
    		if(x==a.length()-1 && y== b.length()-1)
			{
				if(a[x]!=b[y])
					flag=0;
				break;
			}
    	}
    	cout<< (flag ? "YES":"NO") << "\n";
    }
    
}
