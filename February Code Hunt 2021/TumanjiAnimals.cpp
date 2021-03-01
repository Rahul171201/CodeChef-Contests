#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int ID[n];
    int freq[100001]={0};
    for(int i=0;i<n;i++){
        cin>>ID[i];
        freq[ID[i]]++;
    }

    int max_freq = INT_MIN;
    int min_ID = INT_MAX;

    for(int i=0;i<n;i++){
        if(freq[ID[i]]>=max_freq){
            max_freq = freq[ID[i]];
            if(min_ID>ID[i]){
                min_ID = ID[i];
            }
        }
    }

    cout<<min_ID;
}