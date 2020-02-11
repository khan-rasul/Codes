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
    ll sum=0;
    while(n--)
    {
        string s;
        cin>>s;
        switch(s[0])
        {
            case 'T':
                sum+=4;
                break;
            case 'C':
                sum+=6;
                break;
            case 'O':
                sum+=8;
                break;
            case 'D':
                sum+=12;
                break;
            case 'I':
                sum+=20;
        }
    }
    cout<<sum;
}
