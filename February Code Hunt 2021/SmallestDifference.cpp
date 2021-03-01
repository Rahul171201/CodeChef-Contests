#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        sort(A,A+n);
        int min=INT_MAX;
        int min1,min2;

        for(int i=0;i<n-1;i++){
            if(abs(A[i+1]-A[i])<min){
                min = abs(A[i+1]-A[i]);
                min1 = A[i];
                min2 = A[i+1];
            }
        }

        cout<<min1<<" "<<min2<<endl;
    }
}