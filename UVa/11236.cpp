/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
bool check(float x)
{
    if(x<=0 || x>20) return false;
     x=x*100;
     int y=x;
     float z=y;
     return z==x;
}
int main()
{
    fast();
    for(float a=0.01;a<=20.00;a+=0.01)
    {
        for(float b=0.01;b<=20.00;b+=0.01)
        {
            for(float c=0.01;c<=20.00;c+=0.01)
            {
                float d=(a+b+c)/(a*b*c-1);
                if(check(d))
                    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
            }
        }
    }
}
