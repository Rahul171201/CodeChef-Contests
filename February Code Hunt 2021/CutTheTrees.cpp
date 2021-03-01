#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int n;
    cin>>n;
    long long int A[n],B[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
        B[i] = A[i];
    }
    int count = n;
    sort(A, A+n);
    sort(B, B+n);
 
    int start=0;
    while(count>0){
            int flag=0;
            cout<<count<<endl;
            int new_start = start;
            for(int i=start;i<n;i++){
                
                    A[i] = A[i] - B[start];
                    
                    if(A[i]==0){
                        count--;
                    }
                    else if(flag==0 && A[i]>0){
                        flag++;
                        new_start = i;
                    }
            }
            for(int i=0;i<n;i++){
                B[i] = A[i];
            }

            start = new_start;       
    }
    
}