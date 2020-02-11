/*-----lusar_98-----*/
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
    ll T;
    cin>>T;
    while(T--)
    {
        ll n;
        cin>>n;
        ll arr[n][26];
        memset(arr,0,sizeof arr);
        string s;
        for(ll i=0;i<n;i++)
        {
            cin>>s;
            for(ll j=0;j<s.size();j++)
            {
                arr[i][s[j]-'a']++;
            }
        }
        ll ans=0;
        for(ll i=0;i<26;i++)
        {
            ll flag=0;
            for(ll j=0;j<n;j++)
            {
                if(!arr[j][i])
                {flag=1;break;}
            }
            if(!flag)
                ans++;
        }
        cout<<ans<<endl;
    }
}
