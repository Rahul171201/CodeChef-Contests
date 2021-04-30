#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll q;
    cin >> q;
    while (q--)
    {
        ll r, n, t;
        cin >> r >> n >> t;

        vector<ll> coins;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            coins.push_back(x);
        }

        ll temp = t / 2;
        ll sum = coins[0];
        if (temp > n)
        {
            for (ll i = 1; i < n; i++)
            {
                sum += coins[i];
            }
        }
        else
        {
            for (ll i = 1; i <= temp; i++)
            {
                sum += coins[i];
            }
            if (t % 2 == 1 && temp < n)
            {
                if (coins[temp] % 2 == 0)
                {
                    sum = sum + (coins[temp] % 2);
                }
                else
                {
                    sum = sum + (coins[temp] / 2) + 1;
                }
            }
        }

        if (sum > r)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
}