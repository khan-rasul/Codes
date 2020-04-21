/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
int s,d,sum=0;
vector<int> arr;
void backtrack(int m,int current)
{
    if(m>12) return;
    sum+=current;
    if(m>=5 && sum>=0) return;
    if(m>5) sum-=arr[m-6];
    if(m>=5 && sum+s>=0)
    {arr.push_back(d);backtrack(m+1,d);}
    else
    {arr.push_back(s);backtrack(m+1,s);}

}
int main()
{
    fast();
    while(cin>>s>>d)
    {
        arr.clear();
        d=(-1*d);
        backtrack(1,s);
        for(int i=0;i<arr.size();i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
}
