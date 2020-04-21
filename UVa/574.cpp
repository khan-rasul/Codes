/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
int n,t;
vector<int> arr;
set<vector<int> > data;
void backtrack(int total,int i,int mask)
{
    if(total<0) return;
    if(i>n) return;
    if(total==0)
    {
        vector<int> current;
        for(int j=0;j<n;j++)
            if(mask&(1<<j))
            {
                current.push_back(arr[j]);
            }
        data.insert(current);
        return;
    }
    backtrack(total-arr[i],i+1,mask|(1<<i));
    backtrack(total,i+1,mask);
}
int main()
{
    //fast();
    while(cin>>t>>n,n!=0)
    {
        data.clear();
        arr.clear();
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        }
        cout<<"Sums of "<<t<<":\n";
        backtrack(t,0,0);
        if(!data.size()) cout<<"NONE\n";
        else
        {
            set<vector<int> >::iterator it=data.end();
            it--;
            for(;it!=data.begin();it--)
            {
                for(int i=0;i<(*it).size();i++)
                {
                    if(i) cout<<"+";
                    cout<<(*it)[i];
                }
                cout<<endl;
            }
            for(int i=0;i<(*it).size();i++)
                {
                    if(i) cout<<"+";
                    cout<<(*it)[i];
                }
                cout<<endl;
        }
    }
}
