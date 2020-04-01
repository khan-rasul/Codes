/*
* I'm a Ghost
* Now you see me, now you don't
*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll int
#define mod 1000000007
#define inf ((ll)1e18)
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
vector<int> prefix_function(string s) {
    int n = (int)s.length();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}
string give(string s)
{
    string t = s;
    reverse(t.begin() , t.end());
    string p = s + "*" + t;
    vector<ll> res = prefix_function(p);
    string ans = "";
    for(ll i = 0 ; i < res.back() ; i++ )
        ans += p[i];
    p = t + "*" + s;
    res = prefix_function(p);
    string temp = "";
    for(ll i = 0 ; i < res.back() ; i++ )
        temp += p[i];
    if(ans.size() < temp.size())
        ans = temp;
return ans;
}

int main()
{
    fast();
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll l = 0 , r = s.length() - 1;
        string ls = "" , part = "";
        while(l < r)
        {
            if(s[l] != s[r]) break;
            ls += s[l];
            l++;
            r--;
        }
        if(l == r) part = s[l];
        else
        {
            for(ll i = l ; i <= r ; i++ )
                part += s[i];
            part = give(part);
        }
        string rs = ls;
        reverse(rs.begin() , rs.end());
        cout<<ls + part + rs<<endl;
    }
}
