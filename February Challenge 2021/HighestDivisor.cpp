#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,max;
    cin>>n;
    for(int i=1;i<11;i++){
        if(n%i==0)
            max=i;
    }
    cout<<max;
}