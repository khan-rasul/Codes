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
    ll k;
    cin>>k;
    string s;
    cin>>s;
    s= "0" + s;
    ll cnt[s.length() + 1] = {0} , sum[s.length() + 1] = {0};
    cnt[0] =( s[0] == '1' );
    ll ans = 0;
    for(ll i = 1 ; i < s.length()  ; i++)
    {
    	cnt[i] = (s[i] == '1') + cnt[i - 1];
    }
    for(ll i = 0 ; i < s.length() ; i++ )
    {
    	if(cnt[i] >= k)
    		ans += sum[cnt[i] - k];
    	sum[cnt[i]]++;
    	
    } 
    cout<<ans<<endl; 
}
