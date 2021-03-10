#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    string s[n];
    
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    
    stack<int> st;
    int size=0;
    for(int i=0;i<n;i++){
        if(s[i]=="X"){
            st.pop();
            size--;
        }
        else if(s[i]=="Y"){
            st.push(st.top()*2);
        }
        else if(s[i]=="+"){
            stack<int> t = st;
            t.pop();
            st.push(st.top()+t.top());
            size++;
        }
        else{
            
            int temp = stoi(s[i]);
            st.push(temp);
            size++;
        }
    }
    int sum=0;
  
    while(!st.empty()){
        // cout<<st.top()<<" ";
        sum+=st.top();
        st.pop();
    }
    cout<<sum;
}