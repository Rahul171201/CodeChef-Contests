#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<ll>> dp(1e3 + 1, vector<ll>(1e3 + 1, 0));
    ll dif = 0, prev = 0;
    for (ll i = 1; i <= 1e3; i++)
    {
        dif = i;
        prev = (i * (i + 1)) / 2;
        dp[i][1] = prev;
        for (ll j = 2; j <= 1e3; j++)
        {
            dp[i][j] = dp[i][j - 1] + dif;
            dif++;
        }
    }

    // for (ll i = 1; i <= 1e3; i++)
    // {
    //     for (ll j = 1; j <= 1e3; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    ll t;
    cin >> t;

    while (t--)
    {
        ll x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        ll ans = 0;
        for (ll i = x1; i <= x2; i++)
        {
            ans = ans + dp[i][y1];
        }
        for (ll i = y1; i <= y2; i++)
        {
            ans = ans + dp[x2][i];
        }
        ans = ans - dp[x2][y1];
        cout << ans << "\n";
    }
}