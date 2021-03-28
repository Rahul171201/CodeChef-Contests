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
        ll n,x;
        cin>>n>>x;
        set<pair<ll,ll>> m;
        for(ll i=0;i<n;i++){
            ll s,r;
            cin>>s>>r;
            m.insert({s,r});
        }

        ll max = INT_MIN;
        for(auto it : m){
            if(it.first<=x){
                if(it.second>max)
                    max =it.second;
            }
        }

        cout<<max<<"\n";
        m.clear();
    }
}