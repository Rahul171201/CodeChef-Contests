#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> V;
        int w[n+1],index[n+1],l[n+1];
        for(int i=1;i<=n;i++){
            cin>>w[i];
            V.push_back(make_pair(w[i],i));
        }
        for(int i=1;i<=n;i++){
            cin>>l[w[i]];
        }
        int count = 0;
        for(int min=1;min<n;min++){
            auto j = V.begin();
            for(auto i=V.begin();i!=V.end();i++){
                if(i->first == min){
                    j = i;
                    break;
                }
            }

            for(auto i=V.begin();i!=V.end();i++){
            
                 if(i->first > j->first && i->second <= j->second){
                     while(i->second<=j->second){
                         i->second=i->second + l[i->first];
                         count++;
                     }
                     
                 }
            }
        }

        cout<<count<<"\n";
        

    }
}