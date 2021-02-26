#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int A1[300]={0}, A2[300]={0}, A3[300]={0};
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        int flag=0;

        if(s1.size()==s2.size() && s1.size()==s3.size()){
            for(int i=0;i<s1.size();i++){
                A1[int(s1[i])]++;
                A2[int(s2[i])]++;
                A3[int(s3[i])]++;
            }

            for(int i=0;i<s1.size();i++){
                if((A1[int(s1[i])] != A2[int(s1[i])]) || (A1[int(s1[i])] != A3[int(s1[i])])){
                    flag++;
                }
            }

            if(flag==0){
                cout<<"Possible"<<endl;
            }
            else{
                cout<<"Not Possible"<<endl;
            }
        }
        else{
            cout<<"Not Possible"<<endl;
        }
    }
}
