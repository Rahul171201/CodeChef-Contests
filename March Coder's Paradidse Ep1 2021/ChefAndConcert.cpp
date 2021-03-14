#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,d;
        cin>>n>>d;
        vector<ll> v;

        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            v.push_back(x);
        }

        for(ll i=n-1;i>=0;i--){
            v[i] = (d/v[i]) * v[i];
            d = v[i];
        }

        sort(v.begin(), v.end());
        cout<<v[0]<<"\n";
    }
}