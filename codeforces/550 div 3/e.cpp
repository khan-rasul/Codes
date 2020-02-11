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
    string a,b;
    cin>>a>>b;
    vector<ll> num1,num2,res,ans;
    for(ll i=n-1;i >= 0;i--)
    {
        num1.pb(a[i]-'a');
        num2.pb(b[i]-'a');
    }
    ll c=0;
    for(ll i=0; i<n;i++)
    {
        res.pb( (num1[i] + num2[i] + c) % 26 );
        c=(num1[i] + num2[i] + c)/26;
    }
    c=0;
    for(ll i=res.size()-1;i>=0;i--)
    {
        ans.pb((res[i]+c)/2);
        c=(res[i]+c)%2;
    }
    /*for(ll i=num1.size()-1;i>=0;i--)
    {
        cout<<num2[i];
    }*/
    ll i;
    //for( i=0;i<ans.size() && ans[i]==0;i++);
    for(i=0 ;i<ans.size();i++)
    {
        cout<<(char) (ans[i] + 'a' );
    }
}
