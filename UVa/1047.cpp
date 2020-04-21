/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
    fast();
    int n,x;
    int num=1;
    while(cin>>n>>x,n!=0)
    {
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int m;
        cin>>m;
        vector<int> com[m];
        bitset<10> check;
        for(int i=0;i<m;i++)
        {
            int t;
            cin>>t;
            vector<int> temp;
            while(t--)
            {
                int z;
                cin>>z;
                temp.push_back(z);
            }
            cin>>t;
            temp.push_back(t);
            com[i]=temp;
            for(int j=0;j<com[i].size()-1;j++)
            {
                arr[com[i][j]-1]-=com[i][com[i].size()-1];
            }
        }
        int sum=0;
        int ans=0;
        vector<int> pop;
        //for(int i=0;i<n;i++) cout<<arr[i]<<" ";
        for(int i=1;i<(1<<n);i++)
        {
            vector<int> hmm;
            check.set();
            sum=0;
            if(__builtin_popcount(i)==x)
                for(int j=0;j<n;j++)
                {
                    if(i&(1<<j))
                    {
                        hmm.push_back(j+1);
                        sum+=arr[j];
                        for(int k=0;k<m;k++)
                        {
                            if(check[k])
                                for(int l=0;l<com[k].size()-1;l++)
                                    if(com[k][l]==j+1 )
                                    {
                                        check[k]=false;
                                        sum+=com[k][com[k].size()-1];
                                        break;
                                    }
                        }
                    }
                }
            if(ans<sum)
            {
                ans=sum;
                pop=hmm;
            }
        }
        cout<<"Case Number  "<<num++<<endl;
        cout<<"Number of Customers: "<<ans<<endl;
        cout<<"Locations recommended: ";
        for(int i=0;i<pop.size();i++)
            {cout<<pop[i]; if(i!=pop.size()-1) cout<<" ";}
        cout<<endl;
        cout<<endl;
    }
}
