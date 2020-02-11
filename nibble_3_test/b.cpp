/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf ((ll)1e18)
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
    	ll d;
    	cin>>d;
    	ll l = 0 , h = d, mid = 0 , pre = -1;
    	while(l < h && pre != mid)
    	{
    		pre = mid;
    		mid = (l + h) /2;
    		if(mid * (mid + 1) >= 2 * d)
    			h = mid;
    		else l = mid;
    	}
    	if(h * (h + 1) < 2 *d)
    		mid = h;
    	else mid = l;
    	mid++;
    	mid %= 3;
    	if(mid == 0)
    		cout<<"SD";
    	else if(mid == 1)
    		cout<<"DR";
    	else
    		cout<<"RS";
    	cout<<endl;
    }
}
