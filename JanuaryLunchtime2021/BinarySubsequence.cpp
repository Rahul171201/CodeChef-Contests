#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count = 0;

        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                count ++;
            }
        }
    int min = count;
        for(int i=0;i<n;i++){
            if(A[i]=='1'){
                count++;
            }
            else{
                count--;
            }
            if(count<min)
                min=count;
        }

        cout<<min<<"\n";
    }
}