
#include <bits/stdc++.h>
 
using namespace std;


 
int main() {
    int t;
    cin >> t;
    
    for (int tt = 0; tt < t; tt++) {
     	int n;
     	cin>>n;
     	int arr[n];
     	long long sum=0;
     	for(int i=0;i<n;i++){
     	    cin>>arr[i];
     	    sum+=arr[i];
     	}
     	long long curr=0;
     	long long ans=0;
     	int k=0,l=0;
     	for(int i=0;i<n;i++){
     	    curr+=arr[i];
     	    if(curr>ans){
     	        ans=curr;
     	        l = i;
     	    }
     	    if(curr<=0){
     	        curr=0;
     	        k = i + 1;
                l = i + 1;
     	    }
     	}
     	// cout<<sum<<" "<<ans<<endl;
        // cout<<k<<" "<<l<<endl;
     	if(sum==ans && ( k==0 && l==n-1 ) )
     	  cout<<"YES"<<endl;
     	else 
     	   cout<<"NO"<<endl;
    	
   } 
 
	return 0;
}
 

