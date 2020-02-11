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
    ll k, n ,m;
    cin>>k>>n>>m;
    ll a=0, b=0;
    while(k--)
    {
    	string s;
    	cin>>s;
    	if(s == "Mars")
    		a++;
    	else
    		b++;
    }
    if(m>b)
    {
    	cout<< m -b + max(n-a , 0ll) ;
    }
    else
    {
    	cout<< max( m + n - b -a,0ll );
    }
}
