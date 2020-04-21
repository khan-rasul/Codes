/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
int mask,ans;
int p,n;
void backtrack(int arr[],int index,int total,int a)
{
    if(total>n) return;
    if(total>=ans)
    {
        ans=total;
        mask=a;
    }
    if(index>=p) return;
    backtrack(arr,index+1,total,a);
    backtrack(arr,index+1,total+arr[index],a|(1<<index));
}
int main()
{
    fast();
    while(cin>>n)
    {
        ans=-1;
        mask=-1;
        cin>>p;
        int arr[p];
        for(int i=0;i<p;i++) cin>>arr[i];
        backtrack(arr,0,0,0);
        for(int i=0;i<p;i++)
            if(mask&(1<<i))
            cout<<arr[i]<<" ";
        cout<<"sum:"<<ans<<endl;
    }
}
