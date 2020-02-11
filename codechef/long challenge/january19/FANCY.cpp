/*-----lusar_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
using namespace std;
int main()
{
    //fast();
    ll t;
    scanf("%lld\n",&t);
    while(t--)
    {
        string s="",g="not";
        bool flag=false;
        getline(cin,s);
        //cin>>s;
        for(ll i=0;i<=(ll)s.size()-3;i++)
        {
            if(s.substr(i,3)==g)
            {
                flag=true;
                if(i>0 && s[i-1]!=' ')
                    flag=false;
                if(i+3<s.size() && s[i+3]!=' ')
                    flag=false;
            }
            if(flag)
                break;
        }
        flag?cout<<"Real fancy\n":cout<<"regularly fancy\n";
    }
}
