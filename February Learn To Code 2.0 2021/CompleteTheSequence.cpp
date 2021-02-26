#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int A[100];
    A[1] = 1;
    A[2] = 2;
    A[3] = 3;
    A[4] = 4;

    for(int i=4;i<100;i++){
        A[i] = A[i-1] + A[i-3];
    }
    while(t--){
        int n;
        cin>>n;
        cout<<A[n]<<"\n";
    }
}
