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
        ll a,y,x;
        cin>>a>>y>>x;

        // vector<ll> candles(a+1,x);
        // candles[0] = 1;
        ll sum=0;

        
        if(y<=a){
            sum = y*x;
        }
        else{
            sum = x*a+1;
        }
        // for(ll i=0;i<=a;i++){
        //     if(i<y){
        //         sum+=candles[i];
        //     }
        //     else{
        //         sum = sum - candles[i-y] + x;
        //     }
        // }
        cout<<sum<<endl;
        // candles.clear();
    }
}