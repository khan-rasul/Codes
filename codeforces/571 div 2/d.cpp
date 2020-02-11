/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
int main()
{
    //fast();
    ll n;
    cin>>n;
    double arr[n];
    bool check[n]={0};
    for(ll i=0;i<n;i++)
    	{cin>>arr[i];
    		if(floor(arr[i]) == arr[i])
    			check[i] =1;}
    ll sum=0;
    ll brr[n];
    ll neg=0,pos=0;
    for(ll i =0 ;i<n; i ++)
    {
    	if(arr[i] >=0)
    		{brr[i] = (ceil(arr[i])); if(!check[i] ) pos++;}
    	else
    		{brr[i] = floor(arr[i]);if(!check[i] )neg++;}
    	sum+=brr[i];
    }
    if(sum>0)
    {
    	for(ll i=0 ; i <n && sum;i++)
		{
			if(brr[i]>0 && check[i] ==0)
				{brr[i]--; sum--;}
			// if(brr[i]<0 && check[i] == 0)
			// 	{brr[i]--;sum--;}
		}
    }
    else
    {
    	for(ll i=0 ; i <n && sum!=0;i++)
		{
			// if(brr[i]>0 && check[i] ==0)
			// 	{brr[i]++; sum++;}
			if(brr[i]<0 && check[i] == 0)
				{brr[i]++;sum++;}
		}
    }
    for( ll i=0 ;i<n;i++)
    	cout<<brr[i]<<"\n";
}
