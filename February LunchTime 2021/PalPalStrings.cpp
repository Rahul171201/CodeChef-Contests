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
        int freq[200]={0};
        for(int i=0;i<s.size();i++){
            freq[int(s[i])]++;
        }

        int even_string = 0;
        int dependent = 0;
        for(int i=97;i<=122;i++){
            // if(freq[i]>1 && freq[i]%2==0){
            //     even_string= even_string + freq[i]/2;
            // }
            // else if(freq[i]==1){
            //     dependent++;
            // }

            if(freq[i]>0){
                even_string = even_string + freq[i]/2;
                if(freq[i]%2==1){
                    dependent++;
                }
            }
        }

        if(dependent>even_string){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}