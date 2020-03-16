/*
* Fingers Crossed
*/
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
    // fast();
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans = 0;
    for(ll i = 25 ; i > 0 ; i-- )
    {
    	string temp = "";
    	for(ll j = 0 ; j < s.length() ; j++ )
    	{
    		if(s[j] - 'a' == i)
    		{
    			if((j + 1 < s.length() && s[j + 1] - 'a' == i - 1) || (temp.length() > 0 && temp[temp.length() - 1] - 'a' == i - 1))
    			{
    				ans++;
    			}
    			else
    				temp += s[j];
    		}
    		else
    			temp += s[j];
    	}
    	if(s != temp) i++;
    	s = temp;
    }
    cout<<ans<<endl;
}
