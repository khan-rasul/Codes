/******lusar_98******/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1e9+7
using namespace std;
string base[]={"NNNNNNN","","","","","","","","",""};
int main()
{
    fast();
    int n;
    while(cin>>n,n!=0)
    {
        bitset<7> led;
        led.set();
        string arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<7;j++)
            {
                if(arr[i][j]=="Y")
                    led[j]=true;
            }
        }

    }
}
