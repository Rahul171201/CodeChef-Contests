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
        ll n;
        cin >> n;
        vector<ll> a, b;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.push_back(x);
        }
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            b.push_back(x);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<ll>());

        ll maximum = INT_MIN;
        for(ll i=0;i<n;i++){
            ll temp = a[i] + b[i];
            if(temp>maximum){
                maximum = temp;
            }
        }

        
        cout << maximum << "\n";
    }
}