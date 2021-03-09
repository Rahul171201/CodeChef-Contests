#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,k;
        cin>>a>>b>>k;
        
        long long int count=0,flag=1;
        
        if(a==b){
            if(k==0){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
        
        else{
            	if (k == 0){
 			        cout << "NO" << endl;
 	           	}
 		        else if(k == 1){
 			        if (a > 0 && ((b / a) == b)){
 				        cout << "YES" << endl;
 			        }
 			    else if(b > 0 && ((a / b) == a)){
 				    cout << "YES" << endl;
 			    }
 		        else if(a == 0 || b == 0){
 				    cout << "YES" << endl;
 				}
 				else{
 				    cout<<"NO"<<endl;
 				}
 		    }
 		        
 		        else{
 		            cout<<"YES"<<"\n";
 		        }
 		}
        
       
    }
}