#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,q,m;
        cin>>n>>q>>m;
        long long int A[n+1]={0};
        for(long long int i=1;i<=n;i++){
            cin>>A[i];
        }
        vector<long long int> dp(m+1, 0);

        map<pair<int,int>, int> mp; // As soon as you access the map with the [] operator, if the key doesn't exist it gets added. The default initializer of the int type gets invoked - so it will get a value of 0.

        while(q--){
            long long int l,r;
            cin>>l>>r;
            mp[{A[l], A[r]}]++;
           
        }

        for(auto i : mp){
            long long int l = i.first.first;
            long long int r = i.first.second;
            long long int freq = i.second;

             long long int it = 0;
            while(it<=m){
                it = it + l;
                if(it<=m)
                    dp[it] = dp[it] + freq;
                it = it + r;
                if(it<=m)
                    dp[it] = dp[it] - freq;
                
            }


        }

        for(long long int i=1;i<=m;i++){
            dp[i] = dp[i] + dp[i-1];
        }
        sort(dp.begin(), dp.end());
        cout<<dp[m]<<"\n";
    }
}
