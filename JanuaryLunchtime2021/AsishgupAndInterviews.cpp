#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,count=0,time_sum=0, flag=0,extra=0;
	    cin>>n>>k;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	        
	        if(A[i]==-1){
	             count++;
	        }
	           
	           
	       else{
	           time_sum=time_sum + A[i];
	           if(A[i]>k){
	               flag++;
	           }
	           if(A[i]<=1){
	               extra++;
	           }
	       }
	    }
	    
	    float u = n;
	    float y = ceil(u/2);
	    
	    if(n-count < y){
	        cout<<"REJECTED\n";
	    }
	    
	    else if(flag!=0){
	        cout<<"TOO SLOW\n";
	    }
	    
	    else if(extra==n){
	        cout<<"BOT\n";
	    }
	    
	    else{
	        cout<<"ACCEPTED\n";
	    }
	    
	    
	    
	    
	    
	    
	    
	}
	return 0;
}
