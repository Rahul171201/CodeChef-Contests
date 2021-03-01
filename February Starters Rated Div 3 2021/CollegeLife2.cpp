#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        int Q[s];
        for(int i=0;i<s;i++){
            cin>>Q[i];
        }
        int E[s],watchtime=0;
        for(int i=0;i<s;i++){
            cin>>E[i];
        }
        for(int i=0;i<s;i++){
            int L[E[i]]={0};
            for(int j=0;j<E[i];j++){
                cin>>L[j];
                watchtime+=L[j];
            }
            if(E[i]>1)
            watchtime=watchtime-Q[i];
        }
        cout<<watchtime<<endl;
    }
 }