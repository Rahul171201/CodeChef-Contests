#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int N,k,x,y,modi;
        cin>>N>>k>>x>>y;
        
        modi=abs(x-y);
        
        if(x-y>0){
            int l = k%4;
            
            if(l==1){
                cout<<N<<" "<<N-modi;
            }
            else if(l==2){
                cout<<N-modi<<" "<<N;
            }
            else if(l==3){
                cout<<0<<" "<<modi;
            }
            else{
                cout<<modi<<" "<<0;
            }
        }
        
        else if(x-y<0){
            int l = k%4;
            
            if(l==1){
                cout<<N-modi<<" "<<N;
            }
            else if(l==2){
                cout<<N<<" "<<N-modi;
            }
            else if(l==3){
                cout<<modi<<" "<<0;
            }
            else{
                cout<<0<<" "<<modi;
            }
        }
        
        else{
            cout<<N<<" "<<N;
        }
        
        cout<<"\n";
    }
}
