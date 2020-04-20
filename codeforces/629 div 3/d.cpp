/*
* I'm a Ghost
* Now you see me, now you don't
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
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n ;
    	cin>>n;
    	ll arr[n];
        set<ll> foo;
    	for(ll i = 0 ; i < n ; i++ )
    	{
    		cin>>arr[i];
            foo.insert(arr[i]);
    	}
        if(foo.size() == 1)
        {
            cout<<1<<endl;
            for(ll i = 0 ; i < n ; i++ )
                cout<<1<<" ";
            cout<<endl;
            continue;
        }
        if(n % 2 == 0)
        {
            ll p = 0;
            cout<<2<<endl;
            for(ll i = 0 ; i < n ; i++)
            {
                cout<<p + 1<<" ";
                p = 1 - p;
            }
            cout<<endl;
            continue;
        }
        ll m = -1;
        if(arr[0] == arr[n - 1]) m = 0;
        else
    	for(ll i = 1 ; i < n ; i++ )
        {
            if(arr[i] == arr[i - 1])
            {
                m = i;
                break;
            }
        }
    	if(m != -1)
        {
            ll p = 0;
            cout<<2<<endl;
            for(ll i = 0 ; i < n ; i++)
            {
                if(i == m) p = 1 - p;
                cout<<p + 1<<" ";
                p = 1 - p;
            }
            cout<<endl;
            continue;
        }
        cout<<3<<endl;
        for(ll i = 0 ; i < n - 1 ; i+=2 )
            cout<<"1 2 ";
        cout<<3<<endl;
    }
}
