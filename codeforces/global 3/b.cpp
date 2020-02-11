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
    ll n,m,ta,tb,k;
    cin>>n>>m>>ta>>tb>>k;
    ll arr[n],brr[m];
    for(ll i=0;i<n;i++)
    {
    	cin>>arr[i];
    	arr[i]+=ta;
    }
    for(ll i=0;i<m;i++)
    	cin>>brr[i];
    deque<ll> pnt;
    ll v=0;
    for(ll i=0;i<m;i++)
	{
		if(brr[i]>=arr[v]) 
    	{
    		pnt.pb(i);
    		v++;
    		i--;
    	}
    }
    while(k && !pnt.empty())
    {
    	if( pnt[1] - pnt[0] >= 1)
		{
			pnt.pop_front();
			k--;
		}
		else
		{
			pnt[0]++;
		}
    }
    if( j+1 <=k || ( m - i) <= k)
    {
    	cout<<"-1\n";
    	return 0;
    }
    ll l1=0,r1=j;
    ll l2 = i, r2=m-1;
    if(l2 + k >r2)
    {
    	cout<<"-1\n";
    	return 0;
    }
    cout<<brr[l2+k] + tb<<endl;
}
