/*
* All my senses intensify
* Whenever you and I, we dive
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
    string a , b , s;
    cin>>a>>b;
    ll x , y ;
    cin>>x>>y;
    cin>>s;
    if(a == s) x--;
    else y--;
    cout<<x<<" "<<y<<endl;
}
