/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1e9+7
#define eps 1e-9
using namespace std;
int n,m;
vector<int> arr;
bool simulate(double val)
{
    int cont=1;
    double sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+arr[i]>val)
        {
            sum=arr[i];
            cont++;
        }
        else
            sum+=arr[i];
    }
    if(cont>m) return false;
    return true;
}
int main()
{
    //fast();
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        arr.clear();
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        }
        double lo=*max_element(arr.begin(),arr.end()),hi=0,mid;
        for(int i=0;i<n-m+1;i++)
            hi+=arr[i];
        //printf("%lf %lf\n",lo,hi);
        int t=50;
        if(n>m)
        while(t--)
        {
            mid=(lo+hi)/2;
            simulate(mid)?hi=mid:lo=mid;
            //printf("%d %lf\n",simulate(mid),mid);
        }
        printf("%d\n",(int)ceil(lo));
    }
}
