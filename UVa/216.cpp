/*-----lusar_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
using namespace std;
int main()
{
    //fast();
    ll n;
    ll num=1;
    while(cin>>n,n)
    {
        double dist[n][n]={0};
        vector<ll> foo,bar;
        ll arr[n][2];
        for(ll i=0;i<n;i++)
            {cin>>arr[i][0]>>arr[i][1]; foo.push_back(i);}
        for(ll i=0;i<n-1;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                dist[i][j]=dist[j][i]=hypot(arr[i][0]-arr[j][0],arr[i][1]-arr[j][1]);
            }
        }
        double ans=1<<30;
        do{
            double sum=0;
            for(ll i=0;i<n-1;i++)
            {
                sum+=dist[foo[i]][foo[i+1]];
            }
            if(ans>sum)
            {
                ans=sum;
                bar=foo;
            }
        }while(next_permutation(foo.begin(),foo.end()));
        cout<<"**********************************************************\n";
        cout<<"Network #"<<num++<<endl;
        cout.setf(ios::fixed,ios::floatfield);
        cout.precision(2);
        for(ll i=0;i<n-1;i++)
        {
            cout<<"Cable requirement to connect ("<<arr[bar[i]][0]<<","<<arr[bar[i]][1]<<
            ") to ("<<arr[bar[i+1]][0]<<","<<arr[bar[i+1]][1]<<") is "<<dist[bar[i]][bar[i+1]]+16<<" feet.\n";
        }
        cout<<"Number of feet of cable required is "<<ans+(n-1)*16<<".\n";
    }
}
