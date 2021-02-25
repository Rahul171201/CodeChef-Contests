#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string S[n];

        for(int i=0;i<n;i++){
            cin>>S[i];
        }

        int flag = 0, count=0, i1=0, i2=0, j1=0, j2=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(S[i][j]=='1'){
                   if(count==0){
                       i1 = i;
                       j1 = j;
                   }
                   count++;
                   i2 = i;
                   j2 = j;
                }
            }
        }
        int count1=0;
        for(int i=i1; i<=i2 ; i++){
            for(int j=j1; j<=j2; j++){
                if(S[i][j]=='0'){
                    flag++;
                }
                count1++;
            }
        }

        if(flag==0 && count==count1){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}