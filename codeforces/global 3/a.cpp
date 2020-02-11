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
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans;
    
    
    	ans=2* min(a,b) + 2*c + min( 1ll , max(a,b) - min(a,b));
   
    
    cout<<ans<<endl;
}
