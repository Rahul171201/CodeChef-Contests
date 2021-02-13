#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        sort(A,A+n);
        long long int y = abs(A[n-1]-A[0]);
        cout<<2*y<<"\n";
    }
}