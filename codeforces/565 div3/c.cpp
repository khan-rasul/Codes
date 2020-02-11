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
    ll f=0,e=0,fif=0,six=0,tw=0,forty=0;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
    	ll x;
    	cin>>x;
    	if(x==4)
    		f++;
    	else if(x==8)
    	{
    		if(f>e)
    			e++;
    		else
    		ans++;
    	}
    	else if(x==15)
    	{
    		if(e>fif)
    			fif++;
    		else
    		ans++;
    	}
    	else if(x==16)
    	{
    		if(fif>six)
    			six++;
    		else
    		ans++;
    	}
    	else if(x==23)
    	{
    		if(six>tw)
    			tw++;
    		else
    		ans++;
    	}
    	else if(x==42)
    	{
    		if(tw>forty)
    			forty++;
    		else
    		ans++;
    	}
    }
    ll m= min( min( min( min( min(forty,tw) , six ) , fif ) , e ) , f);
    	ans+=(f+e+fif+six+tw+forty-6*m);
    	cout<<ans<<endl;
}
