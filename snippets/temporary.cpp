
// Matrix exponentiation template

const ll MAXSIZE = 100;
void mat_multiply(ll a[MAXSIZE][MAXSIZE], ll b[MAXSIZE][MAXSIZE]) 
{ 
    ll mul[MAXSIZE][MAXSIZE]; 
    for (ll i = 0 ; i < MAXSIZE ; i++) 
    { 
        for (ll j = 0 ; j < MAXSIZE ; j++) 
        { 
            mul[i][j] = 0; 
            for (ll k = 0 ; k < MAXSIZE ; k++) 
                mul[i][j] = (mul[i][j] + a[i][k] * b[k][j] % mod) % mod; 
        } 
    } 
    for (ll i = 0 ; i < MAXSIZE ; i++) 
        for (ll j = 0 ; j < MAXSIZE ; j++) 
            a[i][j] = mul[i][j];  
} 
void mat_expo(ll M[MAXSIZE][MAXSIZE] , ll n , ll ANS[MAXSIZE][MAXSIZE]) 
{ 
    if(n == 1) 
    {
        for(ll i = 0 ; i < MAXSIZE ; i++ )
            for(ll j = 0 ; j < MAXSIZE ; j++ )
                ANS[i][j] = M[i][j];
        return;
    }
    mat_expo(M , n / 2, ANS);
    mat_multiply(ANS , ANS);
    if(n & 1)
        mat_multiply(ANS , M);
} 

// End of template
