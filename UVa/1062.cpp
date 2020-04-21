#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int num=1;
    while(cin>>s,s!="end")
    {
        vector<char> vc;
        vc.push_back('A');
        int cont=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            int j;
            for(j=0;j<vc.size()&&s[i]<vc[j];j++);
            if(j<vc.size())
            vc[j]=(s[i]);
            else
                vc.push_back(s[i]);

        }
        cout<<"Case "<<num++<<": "<<vc.size()<<endl;

    }
}
