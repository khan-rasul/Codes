/*
* I'm a Ghost
* Now you see me, now you don't
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
	ll dc[9] = {0 , 3 , 6 , 1 , 4 , 7 , 2 , 5 , 8 };
    ll t;
    cin>>t;
    while(t--)
    {
    	string s[9];
    	for(ll i = 0 ; i < 9 ; i++)
    		cin>>s[i];
    	for(ll i = 0 ; i < 9 ; i++ )
    	{
    		s[i][dc[i]] = (s[i][dc[i]] == '1' ? '9' : '1');
    	}
    	for(ll i = 0 ; i < 9 ; i++ )
    		cout<<s[i]<<endl;

    }
}
