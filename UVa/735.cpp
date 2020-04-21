#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
    fast();
    set<int> s;
    for(int i=1;i<=20;i++)
    {
        s.insert(i);s.insert(i*2);s.insert(i*3);
    }
    s.insert(0);s.insert(50);
    vector<int> data(s.begin(),s.end());
    int n;
    while(cin>>n,n>0)
    {
        if(n>180)
            cout<<"THE SCORE OF "<<n<<" CANNOT BE MADE WITH THREE DARTS.\n";
        else
        {
            int a,b,c,perm=0;
            set<vector<int> > comb;
            for(int i=0;i<data.size();i++)
            {
                a=data[i];
                for(int j=0;j<data.size();j++)
                {
                    b=data[j];
                    for(int k=0;k<data.size();k++)
                    {
                        c=data[k];
                        if(a+b+c==n)
                        {
                            perm++;
                            vector<int> test;
                            test.push_back(a); test.push_back(b); test.push_back(c);
                            sort(test.begin(),test.end());
                            comb.insert(test);
                        }
                    }
                }
            }
            if(perm==0)
                cout<<"THE SCORE OF "<<n<<" CANNOT BE MADE WITH THREE DARTS.\n";
            else
            {
                cout<<"NUMBER OF COMBINATIONS THAT SCORES "<<n<<" IS "<<comb.size()<<".\n";

                cout<<"NUMBER OF PERMUTATIONS THAT SCORES "<<n<<" IS "<<perm<<".\n";
            }
        }
        cout<<"**********************************************************************\n";
    }
    cout<<"END OF OUTPUT\n";
}
