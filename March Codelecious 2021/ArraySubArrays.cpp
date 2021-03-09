#include<bits/stdc++.h>
using namespace std;
int main(){
    

    int n,k;
    cin>>n>>k;
    int B[n],A[n];
    for(int i=0;i<n;i++){
        cin>>B[i];
    }
    int size = k;
    for(int i=0;i<k;i++){
        A[i] = B[i];
    }
    int temp=k-1;
    int flag=1;
    while(temp<n){
        if(flag%2==1){
            temp++;
            size++;


            if(temp<n)
            A[size-1] = B[temp];
            flag++;
        }
        else{
            temp = temp+ (2*k) -1;
            size++;
            if(temp<n)
            A[size-1] = B[temp]; 
            flag++;
        }
    }
    
    for(int i=0;i<size-2;i++){
        cout<<A[i]<<" ";
    }
    cout<<A[size-2];
}