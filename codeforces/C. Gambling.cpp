/*-----lusar98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
using namespace std;
int main()
{
    //fast();
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=0;i<n;i++)
        cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll score=0,move=0;
    while( !a.empty() || !b.empty() )
    {
        if(!move)
        {
           if(a.empty())
           {
               if(b.empty())
                break;
               else
                b.pop_back();
           }
           else
           {
               if(b.empty())
               {
                   score+=a[a.size()-1];
                   a.pop_back();
               }
               else
               {
                   if(a[a.size()-1]>b[b.size()-1])
                   {
                        score+=a[a.size()-1];
                        a.pop_back();
                   }
                   else
                    b.pop_back();
               }
           }
        }
        else
        {
            if(b.empty())
           {
               if(a.empty())
                break;
               else
                a.pop_back();
           }
           else
           {
               if(a.empty())
               {
                   score-=b[b.size()-1];
                   b.pop_back();
               }
               else
               {
                   if(a[a.size()-1]<b[b.size()-1])
                   {
                        score-=b[b.size()-1];
                        b.pop_back();
                   }
                   else
                    a.pop_back();
               }
           }
        }
        move=1-move;
    }
    cout<<score;
}
