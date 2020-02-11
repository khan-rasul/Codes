/*-----lusar98-----*/
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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll arr[n]={0};
    ll x=0;
    ll ans=0;
    for(ll i=1;i<n;)
    {
    	if(s[i]==s[x])
    	{
    		arr[i]=1;
    		i++;
    		ans++;
    	}
    	else
    	{
    		x=i+1;
    		i+=2;
    	}
    }
    if(n%2 + ans%2 == 1)
    {
    	ans++;
    }
    cout<<ans<<endl;
    ll cnt=n-ans;
    for(ll i=0;cnt;i++)
    {
    	if(!arr[i])
    	{
    		cout<<s[i];
    		cnt--;
    	}
    }
    cout<<endl;
}
