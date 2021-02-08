#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int A[3];
	    cin>>A[0]>>A[1]>>A[2];
	    
	    sort(A,A+3);
	    
	    if(A[0] + A[1] == A[2])
	        cout<<"YES\n";
	        
	   else
	        cout<<"NO\n";
	}
	return 0;
}
