#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a,b,c;
    cin>>a>>b>>c;

    if(a==b || b==c || c==a){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}