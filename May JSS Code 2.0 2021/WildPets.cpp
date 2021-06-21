#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll x, y;
    cin >> x >> y;

    vector<ll> fact(1e5 + 1, 1);
    for (ll i = 2; i < 1e5 + 1; i++)
    {
        fact[i] = (fact[i - 1] * i) % mod;
    }

    ll dif = abs(x - y);
    if (dif > 1)
    {
        cout << 0 << "\n";
    }
    else
    {
        if (dif == 1)
        {
            ll ans = (fact[x] * fact[y]) % mod;
            cout << ans << "\n";
        }
        else
        {
            ll ans = (fact[x] * fact[y]) % mod;
            ans = (ans * 2) % mod;
            cout << ans << "\n";
        }
    }
}