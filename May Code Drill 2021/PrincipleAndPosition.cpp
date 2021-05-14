#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n,0), ans(n,0);

        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            v[i] = x;
        }

        for(ll i=0;i<n;i++){
            ans[(i+k)%n] = v[i];
        }
        for(ll i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
    }
}