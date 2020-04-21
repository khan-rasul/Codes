/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1e9+7
#define eps 1e-9
using namespace std;
int n;
vector<int> arr;
bool check(double st)
{
    int pre=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]-pre==st)
        {
            st--;
        }
        else if(arr[i]-pre>st)
            return false;
        pre=arr[i];
    }
    return true;
}
int main()
{
    fast();
    int t,num=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        arr.clear();
        double lo=0,hi,mid;
        int pre=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
            if(x-pre>lo)
                lo=x-pre;
            pre=x;
        }
        hi=lo+n-1;
        for(int i=0;i<100;i++)
        {
            mid=(lo+hi)/2;
            check(mid)?hi=mid:lo=mid;
        }
        cout<<"Case "<<++num<<": "<<(int)ceil(hi)<<endl;

    }
}
