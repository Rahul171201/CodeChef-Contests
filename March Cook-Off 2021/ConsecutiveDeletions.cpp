#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<char> v;
        vector<ll> A(n+1,0),B(n+1,0);
        for(ll i=0;i<n;i++){
            char x;
            cin>>x;
            ll y = x-'0';
            v.push_back(x);
            A[i+1] = y;
        }

        for(ll i=1;i<=n;i++){
            B[i] = B[i-1] + A[i];
        }

        std::string s(v.begin(), v.end());
        ll minimum=INT_MAX;
        ll minimum_index=0;
        
        for(ll i=1;i<=n-k+1;i++){
            ll count;
            count = B[i+k-1] - B[i-1];
            if(count<minimum){
                minimum = count;
                minimum_index=i;
            }
        }

        ll cost = (minimum*(minimum+1))/2;
        for(ll i=minimum_index-1;i<minimum_index-1+k;i++){
            s[i] = '0';
        }

        for(ll i=0;i<n;i++){
            if(s[i]=='1'){
                cost++;
            }
        }

        cout<<cost<<"\n";

    }
}