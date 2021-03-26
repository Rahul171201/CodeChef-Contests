#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, k,temp;
        cin >> n >> m >> k;
        temp = k+2;
        if (m == 1)
        {
            for(ll i=2;i<=n;i++){
                temp = temp^(k+i+1);
            }
        }
        else if (n == 1)
        {
            for(ll i=2;i<=m;i++){
                temp = temp^(k+i+1);
            }
        }
        else
        {
            ll minimum = min(n,m);
            ll maximum = max(n,m);
            ll start = 3;
            while(start<=minimum){
                if(start%2==1){
                    temp = temp ^ (k+start+1);
                }
                start++;
            }
            ll flag=0;
            if((start-1)%2==1){
                flag=1;
            }
            while(start<=maximum){
                 if(flag==1){
                     temp = temp ^ (k+start+1);
                 } 
                start++;
            }
            
            if(flag==1){
                ll got = 1;
                while(start+1<=m+n){
                    if(got%2==0){
                        temp = temp ^ (k+start+1);
                    }
                    start++;
                    got++;
                }
            }
            else{
                ll got = 1;
                while(start+1<=m+n){
                    if(got%2==1){
                        temp = temp ^ (k+start+1);
                    }
                    start++;
                    got++;
                }
            }

        }

        cout << temp << "\n";
    }
}
// 7 8 8 9