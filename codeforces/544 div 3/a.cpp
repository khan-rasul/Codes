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
    string a,b;
    cin>>a>>b;
    ll h1=a[1]-'0'+10*(a[0]-'0');
    ll h2=b[1]-'0'+10*(b[0]-'0');
    ll m1=a[4]-'0'+10*(a[3]-'0');
    ll m2=b[4]-'0'+10*(b[3]-'0');
    ll x=h2*60+m2-(h1*60+m1);
    double m=x/2.0;
    h1+=m/60;
    m1+=(ll)m%60;
    if(m1>=60)
    {
        h1++;
        m1-=60;
    }
    h1<10?cout<<"0"<<h1:cout<<h1;
    cout<<":";
    m1<10?cout<<"0"<<m1:cout<<m1;

}

