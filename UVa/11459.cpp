#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        vector<pair<int,int> > board;
        for(int i=0;i<=100;i++)
        {
            board.push_back(make_pair(i,i));
        }
        int a,b,c;
        cin>>a>>b>>c;
        int place[a+1];
        for(int i=0;i<=a;i++) place[i]=1;
        
        for(int i=0;i<b;i++)
        {
            int x,y;
            cin>>x>>y;
            board[x]=make_pair(x,y);
        }
        int player=1;
        int move[c];
        for(int i=0;i<c;i++) cin>>move[i];
        
        for(int i=0;i<c && a!=0;i++)
        {
            
            if(player>a && a!=1)
            player%=a;
            if(place[player]+move[i]>=100 || board[place[player]+move[i]].second>=100)
            {
                place[player]=100;
                break;
            }
            place[player]+=move[i];
            place[player]=board[place[player]].second;
            if(a!=1)
            player++;
        }
        for(int i=1;i<=a;i++)
        cout<<"Position of player "<<i<<" is "<<place[i]<<".\n";
    }
    return 0;
}

