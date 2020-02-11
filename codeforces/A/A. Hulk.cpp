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
    for(ll i=0;i<n;i++)
    {
        if(i) cout<<"that ";
        if(i%2)
            cout<<"I love ";
        else
            cout<<"I hate ";
    }
    cout<<"it";
}
