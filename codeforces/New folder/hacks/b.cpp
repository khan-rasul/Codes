#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long int a[n],m=0,ans=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		if(a[i]>m)
			m=a[i];
	}
	ans=0;
	for (int i = 0; i < n; ++i)
	{
		int x=0;
		if(a[i]!=m)
		{
			x=0;
		}
		while(a[i]==m)
		{
			x++;
			i++;
			//cout<<i<<" "<<a[i]<<" "<<endl;
		}
		if(x>ans)
			ans=x;
	}
	cout<<ans<<endl;
	return 0;
}
