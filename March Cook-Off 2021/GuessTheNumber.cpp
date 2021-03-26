#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
vector<ll> v;

void SieveOfEratosthenes(int n)
{
    bool prime_num[n + 1];
    memset(prime_num, true, sizeof(prime_num));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime_num[p] == true) 
        {
            for (int i = p * p; i <= n; i += p)
                prime_num[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (!prime_num[p]){
            v.push_back(p);
        }
            
}

int main(){
    ll t;
    cin>>t;
    v.push_back(1);
    
    SieveOfEratosthenes(1000000);
    while(t--){
        
        for(ll i=1;i<=2000;i++){
            cout<<i*i<<"\n";
            cout<<flush;
            ll x;
            cin>>x;
            if(x==1){
                break;
            }
            else if(x==-1){
                cout<<"Wrong Answer"<<"\n";
            }
            else{
                continue;
            }
        }
    }
}