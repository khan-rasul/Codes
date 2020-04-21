/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
int arr[20]={1},n;
bool isprime(int x)
{
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)
        return false;
    return true;
}
bool place(int j,int i)
{
    for(int k=1;k<i;k++)
    {
        if(arr[k]==j)
            return false;
    }
    if(!isprime(arr[i-1]+j))
    return false;
    return true;
}
void backtrack(int i)
{
    if(i==n+1)
    {
        if(!isprime(arr[n]+arr[1]))
               return;
        for(int j=1;j<=n;j++)
           { cout<<arr[j]; if(j!=n)cout<<" ";}
        cout<<endl;
    }
    for(int j=i%2+2;j<=n;j+=2)
    {
        if(place(j,i))
        {arr[i]=j;
        backtrack(i+1);}
    }
}
int main()
{
    fast();
    int num=1;
    while(cin>>n)
    {
        if(num!=1) cout<<endl;
        arr[1]=1;
        cout<<"Case "<<num++<<":\n";
        backtrack(2);
    }
}
