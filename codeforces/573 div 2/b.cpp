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
    string a,b,c;
    cin>>a>>b>>c;
        ll ans=10;

    
   if(a == b || a== c || b == c)
    {
ans =1;    }
    map<char , ll > foo;
    foo[a[1]]++;
    foo[b[1]]++;
    foo[c[1]]++;
    
   string s[] = {a,b,c};
   sort(s,s+3);
   if(s[0][1] == s[1][1] && s[0][0] == s[1][0] -1) ans =1;
      if(s[0][1] == s[2][1] && s[0][0] == s[2][0] -1) ans =1;

   if(s[1][1] == s[2][1] && s[1][0] == s[2][0] -1) ans =1;
   if(s[0][1] == s[1][1] && s[0][0] == s[1][0] -2) ans =1;
      if(s[0][1] == s[2][1] && s[0][0] == s[2][0] -2) ans =1;

   if(s[1][1] == s[2][1] && s[1][0] == s[2][0] -2) ans =1;
   if((s[0][0] == (s[1][0] - 1)) && (s[1][0] == (s[2][0] -1)) && (foo.begin()->ss == 3))
   {
   	ans =0;
   }
   if(a == b && b == c)
    {
    	ans =0;
    }
   if(ans == 10) ans =2;
   cout<<ans;
}
