#include<bits/stdc++.h>
using namespace std;

long long int power(long long int x,long long int y)
{
    long long int temp;
    if( y == 0)
        return 1;
    temp = (power(x, y / 2))%1000000007;
    if (y % 2 == 0)
        return (temp * temp)%1000000007;
    else
        return (((x * temp)%1000000007) * temp)%1000000007;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int A[n];
        long long int count=0;
        for(long long int i=0;i<n;i++){
            cin>>A[i];
            if(A[i]%5==0)
                count++;
        }

        long long int ans = (power(2,n) - power(2,n-count) + 1000000007)%1000000007;
        cout<<ans<<"\n";

    }
}