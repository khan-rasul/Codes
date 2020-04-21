/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
    fast();
    string s;
    cin>>s;
    vector<int> data[52];
    for(int i=0;i<s.size();i++)
    {
        if(islower(s[i]))
            data[s[i]-97].push_back(i);
        else
            data[s[i]-65+26].push_back(i);
    }
    int q;
    cin>>q;
    while(q--)
    {
        string ss;
        cin>>ss;
        ss=ss+'#';
        int sum=1,ini=-1,lb=0,flag=0;
        vector<int>::iterator it;
        for(int i=1;i<ss.size();i++)
        {
            if(ss[i-1]==ss[i])
                sum++;
            else
            {
                if(islower(ss[i-1]))
                {
                    if(data[ss[i-1]-97].size()>=sum)
                    {
                        it=lower_bound(data[ss[i-1]-97].begin(),data[ss[i-1]-97].end(),lb);
                        if(ini==-1) ini=*it;
                        advance(it,sum-1);
                        if(it>=data[ss[i-1]-97].end())
                        {
                            flag=1;
                            break;
                        }
                        lb=*it;
                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                }
                else
                {
                    if(data[ss[i-1]-65+26].size()>=sum)
                    {
                        it=lower_bound(data[ss[i-1]-65+26].begin(),data[ss[i-1]-65+26].end(),lb);
                        if(ini==-1) ini=*it;
                        advance(it,sum-1);
                        if(it>=data[ss[i-1]-65+26].end())
                        {
                            flag=1;
                            break;
                        }
                        lb=*it;
                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                }
                sum=1;
            }
        }
        if(flag)
            cout<<"Not matched\n";
        else
            cout<<"Matched "<<ini<<" "<<lb<<endl;
    }

}
