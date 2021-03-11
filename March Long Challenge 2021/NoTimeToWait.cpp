#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,h,k;
    cin>>n>>h>>k;
    int temp = h-k;
    int T[n];
    for(int i=0;i<n;i++){
        cin>>T[i];
    }
    if(temp<=0){
        cout<<"YES"<<endl;
    }
    else{
        int flag=0;
        for(int i=0;i<n;i++){
            
            if(temp<=T[i]){
                flag++;
                break;
            }
        }

        if(flag==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}