#include <bits/stdc++.h>
using namespace std;

int timer(string s){
    int a = s[0] - '0';
    int b = s[1] - '0';
    int c = s[3] - '0';
    int d = s[4] - '0';
    int hour = a*10+b;
    
    int mins = c*10+d;
    
    if(s[6]=='A'){
        if(hour==12){
            return mins;
        }
        else{
            return hour*60 + mins;
        }
    }
    else{
        if(hour==12){
            return hour*60 +mins;
        }
        else{
            return hour*60 + mins + 12*60;
        }
    }
}

int main() {
	
	int t;
	string dummy;
	
	cin>>t;
	 getline(cin, dummy);
	
	while(t--){
	        string s,dum;
	        getline(cin, s);
	       
	        
	        int temp = timer(s);
	        
	        int n;
	        cin>>n;
	        getline(cin, dum);
	        
	        while(n--){
	            string a,b,c,dum;
	            getline(cin, a);
	 
	            b=s;
	            c=s;
	            
	            for(int i=0;i<8;i++){
	                b[i] = a[i];
	            }
	            for(int i=9,j=0;i<17;i++,j++){
	                c[j] = a[i];
	            }
	            
	            int timer1 = timer(b);
	            
	            int timer2 = timer(c);
	            
	            if(temp>=timer1 && temp<=timer2){
	                cout<<1;
	            }
	            else{
	                cout<<0;
	            }
	            
	            
	            
	        }
	        cout<<"\n";
	        
	}
	
	return 0;
}
