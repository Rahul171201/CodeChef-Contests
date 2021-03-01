#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int c,d;
        cin>>d>>c;
        int A[3],B[3];
        int sumA=0,sumB=0;
        for(int i=0;i<3;i++){
            cin>>A[i];
            sumA+=A[i];
        }
         for(int i=0;i<3;i++){
            cin>>B[i];
            sumB+=B[i];
        }
        int withsum=sumA+sumB,withoutsum=sumA+sumB+2*d;

        if(sumA>=150 || sumB>=150){
            withsum = withsum + c;
            if(sumA<150){
                withsum = withsum+d;
            }
            if(sumB<150){
                withsum = withsum+d;
            }
        }
        else{
            withsum = withsum + 2*d;
        }

        if(withsum>=withoutsum){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
 }