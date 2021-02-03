#include <iostream>
using namespace std;

int main() {
	int t;
	int n,k,d;
	cin>>t;
	while(t--){
	    cin>>n>>k>>d;
	    int A[n],s=0;
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	        s+=A[i];
	    }
	    int cont=s/k;
	    
	    if(cont>d){
	        cout<<d<<"\n";
	    }
	    
	    else{
	        cout<<cont<<"\n";
	    }
	}
	return 0;
}

