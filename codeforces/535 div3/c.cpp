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
    ll n;
    cin>>n;
    string s;
    cin>>s;
	string r1="RGB",r2="RBG",g1="GBR",g2="GRB",b1="BRG",b2="BGR";
	string check[7];
	ll flag=0;
    for(ll i=0;i<n+6;i+=3)
    {
    	check[0]+=r1;
    	check[1]+=r2;
    	check[2]+=g1;
    	check[3]+=g2;
    	check[4]+=b1;
    	check[5]+=b2;
    }
    ll diff=mod,ans=-1;
    for(ll i=0;i<6;i++)
    {
    	ll temp=0;
    	for(ll j=0;j<n;j++)
    	{
    		if(s[j]!=check[i][j])
    			temp++;
    	}
    	if(temp<diff)
    	{
    		diff= temp;
    		ans = i;
    	}
    }
    cout<<diff<<endl;
    for(ll i=0;i<n;i++)
    	cout<<check[ans][i];
    cout<<endl;
}
