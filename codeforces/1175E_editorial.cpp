#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second
#define forn(i, n) for(int i = 0; i < int(n); i++) 

const int N = 500 * 1000 + 13;
const int LOGN = 18;

int n, m;
pair<int, int> a[N], q[N];

int nxt[N];
int up[LOGN][N];

int main(){
    scanf("%d%d", &n, &m);
    forn(i, n)
        scanf("%d%d", &a[i].x, &a[i].y);
    forn(i, m)
        scanf("%d%d", &q[i].x, &q[i].y);
    
    sort(a, a + n);
    
    int lst = 0;
    pair<int, int> mx(0, -1);
    forn(i, N){
        while (lst < n && a[lst].x == i){
            mx = max(mx, make_pair(a[lst].y, lst));
            ++lst;
        }
        nxt[i] = (mx.x <= i ? -1 : mx.y);
    }
    
    forn(i, n)
        up[0][i] = nxt[a[i].y];
    for (int j = 1; j < LOGN; ++j) forn(i, n){
        if (up[j - 1][i] == -1)
            up[j][i] = -1;
        else
            up[j][i] = up[j - 1][up[j - 1][i]];
    }
    forn(i, m){
        int x = nxt[q[i].x];
        if (x == -1){
            puts("-1");
            continue;
        }
        
        int res = 1;
        for (int j = LOGN - 1; j >= 0; --j){
            int y = up[j][x];
            if (y == -1)
                continue;
            if (a[y].y < q[i].y){
                res += (1 << j);
                x = y;
            }
        }
                // cout<<x<<" ";

        if (a[x].y >= q[i].y)
            printf("%d\n", res);
        else if (up[0][x] == -1)
            puts("-1");
        else
            printf("%d\n", res + 1);
    }
}