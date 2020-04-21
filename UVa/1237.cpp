#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
struct details{
    string name;
    int l;
    int r;
};
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--)
    {
        int d;
        cin>>d;
        details data[d];
        for(int i=0;i<d;i++)
        {
            details x;
            cin>>x.name;
            cin>>x.l>>x.r;
            data[i]=x;
        }
        int q;
        cin>>q;
        while(q--)
        {
            int p;
            cin>>p;
            int c=0,index=-1;
            for(int i=0;i<d;i++)
            {
                if(data[i].l<=p && p<=data[i].r)
                {
                    c++;
                    index=i;
                }
            }
            if(c==1)
                cout<<data[index].name<<endl;
            else cout<<"UNDETERMINED\n";
        }
        if(t)
            cout<<endl;
    }
}
