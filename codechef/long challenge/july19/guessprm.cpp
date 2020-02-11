/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
//#define endl "\n"
using namespace std;
vector<ll> primes;
void sieve(ll n)
{
    bool arr[n]={0};
    for(ll i=2;i<=n;i++)
    {
        if(!arr[i])
        {
            primes.push_back(i);
            for(ll j=i*i;j<=n;j+=i)
                arr[j]=1;
        }
    }
}
vector<ll> factors(ll n)
{
	vector<ll> res;
	for(ll i =0 ; (primes[i] * primes[i]) <= n ; i++)
	{
		if(n% primes[i] ==0)
		{
			res.pb( primes[i]);
			while(n%primes[i] == 0)
				n/=primes[i];
		}
		
	}
	if(n!=1)
			res.pb(n);
    return res;
}
const ll num = 100000;
int main()
{
    //fast();
    sieve(1000000);
    ll t;
    cin>>t;
    while(t--)
    {
        fflush(stdout);
        ll a,b;
        string ver;
        cout<<"1 "<<num<<endl;
        cin>>a;

        if(a == 0) 
        { 
            cout<<"1 5"<<endl;
            cin>>a;
            if(a == 0) 
                cout<<"2 5"<<endl;
            else
                cout<<"2 2"<<endl;
            cin>>ver; 
            continue; 
        }
        else if( a == 4)
        {
            cout<<"1 2381"<<endl;
            cin>>a;
            if( a == 0)
                cout<<"2 2381"<<endl;
            else if( a == 1)
                cout<<"2 7"<<endl;
            else
                cout<<"2 49999"<<endl;
            cin>>ver;
            continue;
        }
        vector<ll> one = factors((num * num) - a);
        reverse(one.begin() , one.end() );
        ll flag =0,pop,sicle = 0;
        for(ll x:one)
        {
            if( ( ( ( num * num) % x )== a) && (x!=2 && x!=5) )
            {
                if(flag == 0)
                {
                    sicle = x;
                    cout<<"1 "<<x<<endl;
                    cin>>pop;
                    if(pop == 0)
                    {
                        cout<<"2 "<<x<<endl;
                        cin>>ver;
                        break;
                    } 
                    flag =1;
                }
                else
                {
                    if(((sicle * sicle) % x ) == pop )
                    {
                        sicle =x;
                        cout<<"2 "<<x<<endl;
                        cin>>ver;
                        break;
                    }
                }
            }
        }
    }
}
