#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int n;
    cin>>n;
    long long int A[n];
    set<long long int> s;
   
    for(long long int i=0;i<n;i++){
        cin>>A[i];
        s.insert(A[i]);
    }

    for(auto it : s){
        int count=0;
        for(long long int i=0;i<n;i++){
            if(it==A[i]){
                count++;
            }

            if(count>=n/2){
                cout<<it;
                break;
            }
        }
    }


}