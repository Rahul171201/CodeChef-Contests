#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<long long int> v;
        for(int i=0;i<n;i++){
            long long int x;
            cin>>x;
            v.push_back(x);
        }

        int neg_count=0,pos_count=0,zero_count=0;
        for(int i=0;i<n;i++){
            if(v[i]<0){
                neg_count++;
            }
            else if(v[i]>0){
                pos_count++;
            }
            else{
                zero_count++;
            }
        }
        sort(v.begin(), v.end());
        long long int max;
        if(neg_count==1 && zero_count!=0){
            long long int a = v[n-1];
            long long int b = a;
            for(int i=n-2;i>=0;i++){
                if(v[i]!=a){
                    b = v[i];
                    break;
                }
            }
            max = (a*b)+a-b;
            if(abs(v[0]) > max){
                max = abs(v[0]);
            }
        }
        else if(neg_count==1 && zero_count==0){
             long long int a = v[n-1];
            long long int b = a;
            for(int i=n-2;i>=0;i++){
                if(v[i]!=a){
                    b = v[i];
                    break;
                }
            }
            max = (a*b)+a-b;
        }
        else if(neg_count>1){
            long long int a = v[n-1];
            long long int b = a;
            for(int i=n-2;i>=0;i++){
                if(v[i]!=a){
                    b = v[i];
                    break;
                }
            }
            long long int max1 = (a*b)+a-b;

            long long int c = v[0];
            long long int d = c;
            for(int i=1;i<n;i++){
                if(v[i]!=c){
                    d = v[i];
                    break;
                }
            }
            long long int max2 = (c*d)+d-c;
            if(max1>max2){
                max = max1;
            }
            else{
                max = max2;
            }
        }
        else{
             long long int a = v[n-1];
            long long int b = a;
            for(int i=n-2;i>=0;i--){
                if(v[i]!=a){
                    b = v[i];
                    break;
                }
            }
            max = (a*b)+a-b;
        }

        cout<<max<<"\n";
    }
 }