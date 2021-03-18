#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll A[n];
        for(ll i=0;i<n;i++){
            cin>>A[i];
        }

        sort(A,A+n);
        ll flag=0;
        
        for(ll i=0;i<n-1;i++){
            flag+=A[i];
        }


        if(flag > A[n-1]){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        // cout<<endl;
    }
}