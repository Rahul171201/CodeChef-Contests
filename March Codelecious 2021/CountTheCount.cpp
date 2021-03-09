#include<bits/stdc++.h>
using namespace std;
long long int CountTheCount(vector<long long int> &dp, long long int i){

    if(i==1){
        return 1;
    }
    if(i==2){
        return 2;
    }

    if(dp[i]!=-1)
        return dp[i]%1000000007;

    return dp[i] = (CountTheCount(dp,i-1)%1000000007 + CountTheCount(dp,i-2)%1000000007)%1000000007;
    
}
int main(){
    int t;
    cin>>t;
    vector<long long int> dp(100001, -1);
    dp[1] = 1;
    dp[2] = 2;
    CountTheCount(dp, 100000);

    while(t--){
        long long int n;
        cin>>n;
        cout<<dp[n]<<"\n";

    }
}