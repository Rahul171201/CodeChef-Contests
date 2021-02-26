#include<bits/stdc++.h>
using namespace std;
char upperCase(char c){
    int x = int(c);
    if(x>=97 && x<=122){
        x = x-32;
        return char(x);
    }
    return c;
}
char lowerCase(char c){
    int x = int(c);
    if(x>=65 && x<=90){
        x = x+32;
        return char(x);
    }
    return c;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        char ch;
        string s1,s2;
        cin>>ch>>s1>>s2;
        if(ch=='A'){
            for(int i=0;i<s1.size();i++){
                cout<<lowerCase(s1[i]);
            }
            cout<<upperCase(s2[0]);
            for(int i=1;i<s2.size();i++){
                cout<<lowerCase(s2[i]);
            }
            cout<<endl;
        }
        else if(ch=='B'){
             for(int i=0;i<s1.size();i++){
                cout<<lowerCase(s1[i]);
            }
            cout<<"_";
            for(int i=0;i<s2.size();i++){
                cout<<lowerCase(s2[i]);
            }
            cout<<endl;
        }
        else if(ch=='C'){
            for(int i=0;i<s1.size();i++){
                cout<<upperCase(s1[i]);
            }
            cout<<"_";
            for(int i=0;i<s2.size();i++){
                cout<<upperCase(s2[i]);
            }
            cout<<endl;
        }
        else if(ch=='D'){
            cout<<upperCase(s1[0]);
            for(int i=1;i<s1.size();i++){
                cout<<lowerCase(s1[i]);
            }
            cout<<"-";
            cout<<upperCase(s2[0]);
            for(int i=1;i<s2.size();i++){
                cout<<lowerCase(s2[i]);
            }
            cout<<endl;
        }
        else{
            
            for(int i=0;i<s1.size();i++){
                if(i%2==0)
                cout<<lowerCase(s1[i]);
                else
                cout<<upperCase(s1[i]);
            }
            cout<<"|";
            for(int i=0;i<s2.size();i++){
                if(i%2==0)
                cout<<lowerCase(s2[i]);
                else
                cout<<upperCase(s2[i]);
            }
            cout<<endl;
        }
    }
}
