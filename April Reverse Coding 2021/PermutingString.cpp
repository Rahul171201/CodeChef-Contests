#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<char> v;

        for (ll i = 1; i <= n; i++)
        {
            char c = i + 96;
            v.push_back(c);
        }
        
        for(ll i=0;i<k;i++){

            for(ll i=0;i<n;i++){
                cout<<v[i];
            }
            cout<<"\n";
            char temp = v[0];
            for(ll i=1;i<n;i++){
                v[i-1] = v[i];
            }
            v[n-1] = temp;
        }
    }
}