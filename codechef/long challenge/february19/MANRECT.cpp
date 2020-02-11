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
        ll a,b,c,d,e,f,g,xl,yl,xu,yu;
        cout<<"Q 0 0"<<endl;
        cin>>a;
        cout<<"Q 1000000000 1000000000"<<endl;
        cin>>b;
        b=2*1000000000-b;
        cout<<"Q 1000000000 0"<<endl;
        cin>>c;
        c=1000000000-c;
        cout<<"Q "<<(a+c)/2<<" 0"<<endl;
        cin>>d;
        yl=d;
        xl=a-yl;
        xu=c+yl;
        yu=b-xu;
        cout<<"A "<<xl<<" "<<yl<<" "<<xu<<" "<<yu<<endl;
        cin>>a;
    }
}
