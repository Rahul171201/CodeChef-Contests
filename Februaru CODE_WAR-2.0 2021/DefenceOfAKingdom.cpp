#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int w,h,n;
        cin>>w>>h>>n;
        vector<int> x,y;
        int A[w+1]={0},B[h+1]={0};
        for(int i=1;i<=n;i++){
            int a,b;
            cin>>a>>b;
            A[a]=1;
            B[b]=1;
            x.push_back(a);
            y.push_back(b);
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        int max = INT_MIN;
        for(int i=0;i<x.size()-1;i++){
            if((x[i+1]-x[i]) >max){
                max = x[i+1] - x[i];
            }
        }
        int max1 = INT_MIN;
        for(int i=0;i<y.size()-1;i++){
            if(y[i+1]-y[i]>max1){
                max1 = y[i+1] - y[i];
            }
        }

        cout<<(max-1) * (max1-1)<<"\n";


    }
}