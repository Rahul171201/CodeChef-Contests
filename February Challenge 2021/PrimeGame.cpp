#include<bits/stdc++.h>
using namespace std;

long long int SieveOfEratosthenes(long long int n, long long int A[])
{
    long long int prime[n + 1],count=0;
    for(long long int i=0;i<=n;i++){
        prime[i] = 1;
    }
 
    for (long long int p = 2; p * p <= n; p++)
    {     
        if (prime[p] == 1) 
        {
            for (long long int i = p * p; i <= n; i += p)
                prime[i] = 0;
        }
    }
    
    for (long long int p = 2; p <= n; p++){
          if (prime[p]==1){
            count++;
            A[p] = count;
        }
        else{
            A[p] = count;
        }
            
    }
        

    return count;
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int t;
    cin>>t;
    long long int A[1000001];
    A[0] = A[1] = 1;
    
    SieveOfEratosthenes(1000001, A);
    
    
    
    while(t--){
        long long int x,y;
        cin>>x>>y;
        long long int k;
        k =A[x];
        if(k>y){
            cout<<"Divyam\n";
        }       
        else{
            cout<<"Chef\n";
        }

    }
}