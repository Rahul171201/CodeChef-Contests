#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string s;
	    cin>>n;
	    cin>>s;
	    
	    for(int i=0;i<n;i=i+4){
	        int a,b,c,d;
	        a= s[i] - '0';
	        b= s[i+1] - '0';
	        c= s[i+2] - '0';
	        d= s[i+3] - '0';
	        
	        int num = 8*a + 4*b + 2*c + d;
	        
	        num=num + 97;
	        char ch = num;
	        cout<< ch;
	        
	        
	    }
	    cout<<"\n";
	}
	return 0;
}

