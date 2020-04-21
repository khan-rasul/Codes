#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        stack<int> carrier;
        int n,s,q;
        cin>>n>>s>>q;
        queue<int> cargo[n];
        for(int i=0;i<n;i++)
        {
            int qi;
            cin>>qi;
            while(qi--)
            {
                int ai;
                cin>>ai;
                cargo[i].push(ai);
            }
        }
        int index=0;
        int time=0;

        do
        {

            while((cargo[index].size()<q && carrier.size()>0) ||(!carrier.empty()&&carrier.top()==index+1))
            {
                if(carrier.top()==index+1) {carrier.pop(); time++; continue;}
                cargo[index].push(carrier.top());
                carrier.pop();
                time++;
            }
            while(carrier.size()<s && !cargo[index].empty())
            {
                carrier.push(cargo[index].front());
                cargo[index].pop();
                time++;
            }
            index++;
            index%=n;
            time+=2;

        }while(!carrier.empty());
        cout<<time-2<<endl;

    }
}
