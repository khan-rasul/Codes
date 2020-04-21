#include <bits/stdc++.h>
using namespace std;

int main() {
	int l;
	while(cin>>l,l)
	{
	    vector<string> q;
	    string x,y;
	    int a=0,b=0;
	    bool neg=true;
	    for(int i=0;i<l-1;i++)
	    {
	        cin>>x;
	        if(x=="+z"&&!(int)q.size()) {q.push_back(x); y="-z"; if(!neg){swap(q[0],y);neg=true;}}
            else if(x=="+y"&&!(int)q.size()) {q.push_back(x); y="-y";if(!neg){swap(q[0],y);neg=true;}}
            else if(x=="-z"&&!(int)q.size()) {q.push_back(x); y="+z";if(!neg){swap(q[0],y);neg=true;}}
            else if(x=="-y"&&!(int)q.size()) {q.push_back(x); y="+y";if(!neg){swap(q[0],y);neg=true;}}
            
	        if((int)q.size()&&x==q[0])
	        a++;
	        if((int)q.size()&&x==y)
	        b++;
	        if(a==b)
	        q.clear();
	        else if(abs(a-b)%2==0)
	        { q.clear(); neg=false;}
	    }
	    if(a==b)
	    cout<<"+x\n";
	    else if(abs(a-b)%2==0)
	    cout<<"-x\n";
	    else if(b>a)
	    cout<<y<<endl;
	    else
	    cout<<q[0]<<endl;
	}
	return 0;
}

