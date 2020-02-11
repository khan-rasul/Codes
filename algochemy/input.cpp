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
    srand(time(0));
    for(ll i=0;i<5;i++)
    {
        char s[]={'i','n','0',i+'0','.','t','x','t','\0'};
        freopen(s,"w",stdout);
        ll t=rand()%10+1;
        cout<<t<<endl;
        while(t--)
        {
            ll len=rand()%998+1;
            cout<<'z';
            while(len--)
            {
                ll p=rand()%2;
                if(p)
                {
                    cout<<" ";
                }
                else
                {
                    cout<<(char)(rand()%26+97);
                }
            }
            cout<<'a';
            cout<<endl;
        }
        fclose(stdout);
    }
}
