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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(n == 1 && k > 0) {cout<<"0\n"; return 0;}
    if(s[0] != '1' && k > 0)
    {
    	s[0] = '1';
    	k--;
    }
    for(ll i = 1 ; i < n && k; i++ )
	{
		if(s[i] != '0')
		{
			s[i] = '0';
			k--;
		}
	}
    cout<<s<<endl;
}
