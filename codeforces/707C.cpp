/*
* What did I just do?
*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf ((ll)1e18)
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
int main()
{
    // fast();
    ll n;
    cin>>n;
    if(n < 3) return cout<<"-1\n" , 0 ;
    if(n % 2)
    {
    	cout << (n * n + 1) / 2 << " " << (n * n - 1) / 2 << endl;
    }
    else
    {
    	cout << n * n / 4 + 1 << " " << n * n / 4 - 1 << endl;
    }
}