#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int A[n];
        int flag=0;
        long long int min = INT_MAX;
        for(long long int i=0;i<n;i++){
            cin>>A[i];
            if(A[i]<=min){
                min = A[i];
                flag++;
            }
            
        }

        

        if(flag==n){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}