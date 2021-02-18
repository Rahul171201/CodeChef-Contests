#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int d,k;
        cin>>d>>k;
        int x = k - (d%k);
        int y = (d + x)/k;

        int h = y-x;

        if(h>=0 and x>=0){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }


    }
}