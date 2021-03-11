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
        cin>>s;

        int flag=1,count=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count = count + flag;
                flag=0;
            }
            else{
                flag=1;
            }
        }

        cout<<count<<"\n";
    }
}