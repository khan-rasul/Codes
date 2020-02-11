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
    char arr[n][m];
    ll first[n],second[m];
    ll flag=0;
    for(ll i=0;i<n;i++) first[i]=1;
    for(ll i=0;i<m;i++) second[i]=1;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='>')
            {
                if(first[i]==second[j])first[i]++;
                else flag=1;
            }
            else if(arr[i][j]=='<')
            {
                if(first[i]==second[j])second[j]++;
                else flag=1;
            }
        }
    }
    if(flag==1)
    {

    cout<<"Yes\n";
    for(ll i=0;i<n;i++) cout<<first[i]<<" ";
    cout<<endl;
    for(ll i=0;i<m;i++) cout<<second[i]<<" ";}
    else cout<<"No";
}
