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
    ll arr[n];
    ll freq[(ll)2e5+5]={0};
    for( ll i=0;i<n;i++)
        {
            cin>>arr[i];freq[arr[i]]++;
                if(freq[arr[i]]>2)
                {cout<<"NO\n"; return 0;}
        }
    sort( arr,arr+n);
    vector<ll> inc, dec;
    ll i;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            inc.pb(arr[i]);
            dec.pb(arr[i+1]);
            i++;
        }
        else
            inc.pb(arr[i]);
    }
    if(i==n-1)
    {
        inc.pb(arr[i]);
    }
    cout<<"YES\n";
    cout<<inc.size()<<endl;
    if(!inc.empty())
    for(i=0;i<inc.size();i++)
        cout<<inc[i]<<" ";
    cout<<endl;
    cout<<dec.size()<<"\n";
    if(!dec.empty())
    for(i=dec.size()-1;i>=0;i--)
        cout<<dec[i]<<" ";
}
