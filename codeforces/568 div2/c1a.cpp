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
    ll n,m;
    cin>>n>>m;
    ll freq[110]={0};
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
    	ll x;
    	cin>>x;
    	sum+=x;
        ll diff=sum-m;
        ll ans=0;
        for(ll k= 100;k>=0 && diff > 0;k--)
        {
            if( freq[k]!=0 )
            {
                ll temp = min( freq[k], (ll)ceil( (double)diff/k ) );
                diff-= temp*k;
                ans+=temp;
            }
        }
        freq[x]++;
    	cout<<ans<<" ";
    }

}
