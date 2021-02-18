#include<bits/stdc++.h>
using namespace std;
int main(){
   ios:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int H[n];
        for(int i=0;i<n;i++){
            cin>>H[i];
        }
        sort(H, H+n);
        int flag=1,sum=0,max_h = 0;
        for(int i=n-1; i>=0;i--){
            int x = H[i] - H[i-1];
            if(x*flag +sum == m){
                max_h = H[i-1];
                break;
            }
            else if(x*flag + sum <m){
                
                sum=sum+x*flag;
                flag++;
            }
            else{
                int z = m - sum;
                int s = ceil(float(z)/flag);
                
                max_h = H[i] - s;
                break;
            }
        }
        
        // int point=n-2;
        // int check = H[point];
        // for(int i = H[n-1]-1; i>=0; i--){
        //     check = H[point];
        //     if(sum>=m){
        //         max_h = i;
        //         break;
        //     }
        //     else{
        //         if(i==check){
        //              sum = sum + flag;
        //              flag++;
        //              point = n - flag -1;
        //         }
        //          else{
        //               sum = sum + flag;
        //           }
        //     }
            
        // }


        cout<<max_h<<"\n";

    }
}