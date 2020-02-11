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
    srand(time(0));
    for(ll i=0;i<5;i++)
    {
        char s[]={'i','n','0',i+'0','.','t','x','t','\0'};
        char m[]={'o','u','t','0',i+'0','.','t','x','t','\0'};
        freopen(s,"r",stdin);
        freopen(m,"w",stdout);
        ll t;
        scanf("%lld\n",&t);
        while(t--)
        {
            string s;
            getline(cin,s);
            ll ans=0;
            for(ll i=0;i<s.length();i++)
                if(s[i]==' ')
                ans++;
                cout<<ans<<endl;
        }
        fclose(stdout);
    }
}
