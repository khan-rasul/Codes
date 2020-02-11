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
    string a,b;
    cin>>a>>b;
    ll al = a.length() , bl=b.length();
    ll pref[al+2]={0};
    for(ll i=0 ; i<al;i++)
    {
   		if(a[i] == '1')
   			pref[i+1] = pref[i]+1;
   		else
   			pref[i+1] = pref[i];
    }
    ll cnt=0;
    for(ll i =0; i<bl;i++)
    	if(b[i] == '1')
    		cnt++;
    ll ans=0;
    for(ll i=bl-1 , j=0 ; i < al ; i++ , j++ )
    {
    	if((cnt%2 == 0 && (pref[i+1] - pref[j]) %2 == 0) || (cnt%2 == 1 && (pref[i+1] - pref[j]) %2 == 1))
    		ans++;
    }
    cout<<ans<<endl;
}
