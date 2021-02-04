#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n,m;
	    cin>>n>>m;
	    
	    long long int A[n], B[m], s1=0, s2=0;
	    
	    for(long long int i=0;i<n;i++){
	        cin>>A[i];
	        s1=s1+A[i];
	    }
	    
	    for(long long int i=0;i<m;i++){
	        cin>>B[i];
	        s2=s2+B[i];
	    }
	    
	    sort(A,A+n);
	    
    sort(B, B + m, greater<long long int>());
	    
	    long long int count=0, steps=0, flag=0;
	    
	    while(count<n && count<m){
	        
	        if(s1>s2){
	            cout<<steps<<"\n";
	            flag++;
	            break;
	        }
	        
	        else{
	            s1 = s1 + B[count] - A[count];
	            s2 = s2 - B[count] + A[count];
	            count++;
	            steps++;
	        }
	        
	    }
	    
	     if(s1>s2 && (count==n || count==m)){
	            cout<<steps<<"\n";
	            flag++;
	        }
	    
	    if(flag==0){
	        cout<<"-1"<<"\n";
	    }
	    
	    
	    
	}
	return 0;
}

