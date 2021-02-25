#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,h;
        cin>>m>>h;
        int bmi = m/(h*h);
        if(bmi<=18){
            cout<<1<<"\n";
        }
        else if(bmi>18 && bmi<25){
            cout<<2<<"\n";
        }
        else if(bmi>=25 && bmi<30){
            cout<<3<<"\n";
        }
        else{
            cout<<4<<"\n";
        }
    }
}