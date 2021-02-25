#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long int A[k];
        for(long long int i=0;i<k;i++){
            cin>>A[i];
        }
        string S[n];
        for(long long int i=0;i<n;i++){
            cin>>S[i];
        }

        long long int count=0;
        while(count<n){
            long long int sum=0;
            for(long long int i=0;i<k;i++){
                 if(S[count][i] == '1'){
                     sum+=A[i];
                 }
            }
            count++;
            cout<<sum<<"\n";
        }
        
    }
}