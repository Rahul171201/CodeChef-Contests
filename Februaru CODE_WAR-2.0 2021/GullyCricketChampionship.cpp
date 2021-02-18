#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        long long int x,y,z;
        cin>>x>>y>>z;
        long long int temp = min(x,y);
        long long int temp_max = max(x,y);
        long long int sum =0;
        sum = sum + (temp_max - temp) + z;

        if(temp > sum){
            long long int h = (temp_max-temp) + (temp-sum)*2;
            cout<<(h/3) + sum<<"\n";

        }
        else{
            cout<<temp<<"\n";
        }


    }
}