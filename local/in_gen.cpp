/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
int main()
{
    //fast();
    srand( time(0) );
    char s[] = "in#.txt";
    for(ll i = 4; i < 5 ; i++)
    {
    	s[2] = (char) ( '0' + i);
    	freopen(s, "w" , stdout );
    	ll n = 1000000 , m  = 1000000;
    	cout<<n<<" "<<m<<endl;
    	set<pair<ll,ll>> foo;
    	while(m--)
    	{
    		ll a = rand() % n + 1 , b = rand() % n + 1;
    		while( a == b || foo.count( { min(a, b) , max(a,b) } ) )
    		{
    			a = rand() % n + 1 ; b = rand() % n + 1;
    		}
    		cout<<a<<" "<<b<<endl;
    		foo.insert( { min(a, b) , max(a,b) } );
    	}
    	fclose(stdout);
    }
}
