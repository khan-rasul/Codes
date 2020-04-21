#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n,n!=0)
    {
        int arr[n];

        while(cin>>arr[0],arr[0]!=0)
        {
            stack<int> s;
            s.push(0);
            for(int i=1;i<n;i++)
            {
                cin>>arr[i];
            }
            int v=1;
            for(int i=0;i<n;i++)
            {
                while(arr[i]!=s.top()&&arr[i]>=v)
                {
                    s.push(v++);
                }
                if(arr[i]==s.top())
                s.pop();
            }
            if(s.size()>1) cout<<"No\n";
            else cout<<"Yes\n";
        }
        cout<<endl;
    }
}
