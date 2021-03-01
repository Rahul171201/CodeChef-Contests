#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        int count=0;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                count++;
            }
        }
        cout<<count<<endl;
    }
}