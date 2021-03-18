#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

int main(){
    ll a[3],b[3];
    ll flag1=0,flag2=0;
    for(ll i=0;i<3;i++){
        cin>>a[i];
    }
    for(ll i=0;i<3;i++){
        cin>>b[i];
    }
    
    for(ll i=0;i<3;i++){
        if(a[i]>b[i]){
            flag1++;
        }
        else if(b[i]>a[i]){
            flag2++;
        }
    }
    cout<<flag1<<" "<<flag2;
}