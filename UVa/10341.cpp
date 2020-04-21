/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
using namespace std;
double p,q,r,s,t,u;
double f(double x)
{
    return p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
}
double fd(double x)
{
    return -p*exp(-x)+q*cos(x)-r*sin(x)+s*(1/pow(cos(x),2))+2*t*x;
}
int main()
{
    //fast();
    while(scanf("%lf %lf %lf %lf %lf %lf",&p,&q,&r,&s,&t,&u)!=EOF)
    {
        double x=1,y=0.5;
        int t=25;
        if(fabs(f(0))<eps)
        {
            puts("0.0000"); continue;
        }
        while(t--)
        {
            x=y;
            y=x-f(x)/fd(x);
        }
        if(fabs(f(x))<eps && 0<=x && x<=1)
            printf("%.4lf\n",x);
        else
            printf("No solution\n");
    }
}
