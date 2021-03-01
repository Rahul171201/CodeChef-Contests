#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    long long int dp[100];
    dp[0]=dp[1]=1;
    for(long long int i=2;i<1000000;i++){
        dp[i] = dp[i-1]*i;
    }
    while(t--){
        long long int n;
        cin>>n;
        cout<<dp[n]<<endl;
    }
}