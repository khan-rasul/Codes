#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define f(i,a,b) for(i=a;i<b;i++)
#define fr(i,a,b) for(i=a;i>=b;i--)
#define endl '\n'
#define ll long long int
#define ff first
#define ss second
#define pb push_back
#define mod 1000000007
using namespace std;
 
int main()
{
	fast;
	ll n,m,i,j,ans=0,flag=1,pole=0;
	pair<int,int> p[100000];
	cin>>n>>m;
	int a[n][m];
	f(i,0,n)
		f(j,0,m)
			cin>>a[i][j];
	f(i,0,n-1)
		f(j,0,m-1)
		{
			if(a[i][j]==1)
			{
				flag=0;
				if(a[i+1][j]==1 && a[i][j+1]==1 && a[i+1][j+1]==1)
				{
					pole=1;
					p[ans]={i+1,j+1};
					ans++;
				}
			}
		}
	if(pole==1)
		flag=1;
	if(flag==0)
		cout<<"-1\n";
	else
	{
		cout<<ans<<endl	;
		f(i,0,ans)
			cout<<p[i].ff<<' '<<p[i].ss<<endl;
	}
 
}