#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n],B[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
            B[i] = A[i];
        }

        sort(A, A+n);
        list<int> Z[100000];
        for(int i=0;i<n;i++){
            Z[A[i]].push_back(n-i);
        }

        for(int i=0;i<n;i++){
            Z[A[i]].sort();
        }

        for(int i=0;i<n;i++){
            cout<<Z[B[i]].front()<<" ";
            Z[B[i]].pop_front();
        }
        cout<<endl;
    }
}