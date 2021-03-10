#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<int> V,index;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        V.push_back(x);
        index.push_back(i);
    }

    sort(V.begin(), V.end());
    vector<int> store,ans(n,0);

    while(index.size()>0){
        store.push_back(index.front());
        index.erase(index.begin());

        if(index.size()>0){
            int k = index.front();
            index.erase(index.begin());
            index.push_back(k);
        }
    }
    

    for(int i=0;i<n;i++){
        ans[store[i]] = V[i];
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    
}