#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
    fast();
    int f,r;
    while(cin>>f,f!=0)
    {
        cin>>r;
        double fro[f],rea[r];
        for(int i=0;i<f;i++) cin>>fro[i];
        for(int i=0;i<r;i++) cin>>rea[i];
        double dr[f*r];
        int v=0;
        for(int i=0;i<f;i++)
        {
            for(int j=0;j<r;j++)
            {
                dr[v++]=(rea[j]/fro[i]);
            }
        }
        sort(dr,dr+v);
        double min=dr[1]/dr[0];
        for(int i=1;i<v-1;i++)
        {
            if(min<dr[i+1]/dr[i])
                min=dr[i+1]/dr[i];
        }
        printf("%.2f\n",min);
    }
}
