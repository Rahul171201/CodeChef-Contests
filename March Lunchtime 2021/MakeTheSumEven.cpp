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
        ll n;
        cin>>n;
        vector<ll> v;
        ll sum=0;

        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            v.push_back(x);
            sum+=x;
        }

        if(sum%2==0){
            cout<<0<<endl;
        }
        else{
            ll flag=0;
            for(ll i=0;i<n;i++){
                if(v[i]==2){
                    flag=1;
                    cout<<1<<"\n";
                    break;
                }
            }

            if(flag==0){
                cout<<-1<<endl;
            }
        }

        v.clear();
    }
}