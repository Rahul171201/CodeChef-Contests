#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[10]={3,3,3,3,3,3,2,2,2,2};
    int t;
    cin>>t;
    while(t--){
        string s;
        int p=1;
        cin>>s;
        for(int i=0;i<s.size();i++){
            p = p*A[s[i]-'0'];
        }
        cout<<p<<endl;
    }
}