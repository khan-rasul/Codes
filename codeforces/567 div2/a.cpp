#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,z;
    cin>>a>>b>>z;
    long long ans = (a+b)/z;
    if(ans> a/z + b/z)
    cout<<ans<<" "<<z-max(a-z*(a/z),b-z*(b/z) ); 
	else
		cout<<ans<<" "<<0;
    
}
