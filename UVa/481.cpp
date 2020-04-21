/*-----lusar_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
using namespace std;
/*O(nlogk) greedy + D&C solution*/
int main()
{
    ll arr[100000],L[100000],L_id[100000],P[100000],n,lis=0,lis_end=-1;
    for(n=0;scanf("%lld",&arr[n])!=EOF;n++);
    for(ll i=0;i<n;i++)
    {
        ll pos=lower_bound(L,L+lis,arr[i])-L;
        L[pos]=arr[i];
        L_id[pos]=i;
        P[i]=(pos?L_id[pos-1]:-1);
        if(pos+1>=lis)
        {
            lis=pos+1;
            lis_end=i;
        }
    }
    stack<ll> s;
    ll x=lis_end;
    while(x!=-1)
    {
        s.push(arr[x]);
        x=P[x];
    }
    cout<<lis<<"\n-\n";
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}
/*O(n^2) DP solution*/
/*
vector<ll> arr;
vector<pair<ll,ll> > lis;
ll seq(ll i)
{
    if(i==0)
        return 1;
    if(lis[i].first!=0) return lis[i].first;
    pair<ll,ll> ans;
    for(ll j=i-1;j>=0;j--)
    {
        if(arr[j]<arr[i])
        {
            ll temp=seq(j);
            if(ans.first<temp)
            ans={temp,j};
        }
    }
    lis[i]=ans;
    return lis[i].first=ans.first+1;
}
int main()
{
    //fast();
    ll x;
    while(scanf("%lld",&x)!=EOF)
    {
        arr.push_back(x);
        lis.push_back({0,-1});
    }
    lis[0].first=1;
    ll ans=0;
    for(ll i=arr.size()-1;i>=0;i--)
    {
        if(lis[ans].first<seq(i))
            ans=i;
    }
    cout<<lis[ans].first<<endl<<"-\n";
    vector<ll> temp;
    ll k=ans;
    while(k!=-1)
    {
        temp.push_back(arr[k]);
        k=lis[k].second;
    }
    for(ll i=lis[ans].first-1;i>=0;i--)
        cout<<temp[i]<<endl;
}
*/
