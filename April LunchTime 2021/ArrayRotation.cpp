#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum = (sum + x) % mod;
        if (sum < 0)
        {
            sum = sum + mod;
        }
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        x = abs(x);
        sum = (sum * 2) % mod;
        if (sum < 0)
        {
            sum = sum + mod;
        }
        cout << sum << "\n";
    }
}