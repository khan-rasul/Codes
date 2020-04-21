#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int num=1;
	while(t--)
	{
		double d,v,u;
		bool flag=true;
		cin>>d>>v>>u;
		v>=u?printf("Case %d: can't determine\n",num++),flag=false:flag=true;
		double t1=d/u,theta;
		theta=asin(v/u);
		double t2=u*cos(theta);
		t2=d/t2;
		if(flag)
		(t1!=t2)?printf("Case %d: %.3f\n",num++,abs(t1-t2)):printf("Case %d: can't determine\n",num++);
	}
}
