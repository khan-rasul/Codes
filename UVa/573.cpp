#include <iostream>
#include<cstdio>
using namespace std;
int day;
double height,fat;
bool check(double h, double u,double d, double f)
{
    day++;
    if(u>h) {  return true;}
    if(h>height) return false;
    if(u-fat<=0)
    return check(h-u+d,0,d,f);
    return check(h-u+d,u-fat,d,f);
}
int main() {
	double h,u,d,f;
	while(scanf("%lf %lf %lf %lf",&h,&u,&d,&f),h!=0.0)
	{
	    day=0;
	    height=h;
	    fat=f*u/100;
	    check(h,u,d,f)?cout<<"success on day "<<day<<endl:cout<<"failure on day "<<day-1<<endl;
	}
	return 0;
}

