/*
* All my senses intensify
* Whenever you and I, we dive
*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000000
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
    srand(time(0) );
    char in[] = "input0#.txt";
    for(ll i = 4 ; i < 5 ; i++ )
    {
    	in[6] = (char)('0' + i);
    	freopen(in , "w" , stdout);
    	ll n = 1000 , k = 3;
    	cout<<n<<" "<<k<<endl;
    	while(n--)
    	{
    		ll x = 3;//(rand() % 2 ? 1 : -1) * (((rand() % mod ) * (rand() % mod)) % mod);
    		cout<<x<<" ";
    	}
        cout<<endl;
    	fclose(stdout);
    }    
}
