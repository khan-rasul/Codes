/*----lusar_98----*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    
    while(cin>>s,s!="#"){
    t=s;
    next_permutation(s.begin(),s.end());
    if(t<s)
    cout<<s<<endl;
    else
    cout<<"No Successor\n";}
}
