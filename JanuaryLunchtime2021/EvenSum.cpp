#include <bits/stdc++.h>
using namespace std;

int comp(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int odd=0,even=0;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	        if(A[i]%2==0)
	            even++;
	        else
	            odd++;
	    }
	    
	    int x = comp(odd, even);
	    
	    cout<<n-x<<"\n";
	    
	}
	return 0;
}
