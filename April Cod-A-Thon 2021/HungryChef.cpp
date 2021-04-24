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
        vector<ll> w;
        vector<ll> dp(n + 2, 0);

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            w.push_back(x);
        }

        for (ll i = 0; i < n; i++)
        {

            dp[i + 2] = dp[i] + w[i];
        }

        ll flag = 0;
        ll maximum = INT_MIN;
        for (ll i = 0; i < n; i++)
        {

            if (i % 2 == 0)
            {
                if (n % 2 == 1)
                {
                    ll temp1 = dp[n + 1];
                    ll temp2 = dp[n];
                    dp[n + 1] = dp[n + 1] - dp[i + 2] + dp[i + 1];
                    dp[n] = dp[n] - dp[i + 1] + dp[i];
                    if (dp[n + 1] == dp[n])
                    {
                        if (maximum < w[i])
                        {
                            flag++;
                            maximum = w[i];
                        }
                    }
                    dp[n + 1] = temp1;
                    dp[n] = temp2;
                }
                else
                {
                    ll temp1 = dp[n + 1];
                    ll temp2 = dp[n];
                    dp[n] = dp[n] - dp[i + 2] + dp[i + 1];
                    dp[n + 1] = dp[n + 1] - dp[i + 1] + dp[i];
                    if (dp[n + 1] == dp[n])
                    {
                        if (maximum < w[i])
                        {
                            flag++;
                            maximum = w[i];
                        }
                    }
                    dp[n + 1] = temp1;
                    dp[n] = temp2;
                }
            }
            else
            {
                if (n % 2 == 1)
                {
                    ll temp1 = dp[n + 1];
                    ll temp2 = dp[n];
                    dp[n + 1] = dp[n + 1] - dp[i + 1] + dp[i];
                    dp[n] = dp[n] - dp[i + 2] + dp[i + 1];
                    if (dp[n + 1] == dp[n])
                    {
                        if (maximum < w[i])
                        {
                            flag++;
                            maximum = w[i];
                        }
                    }
                    dp[n + 1] = temp1;
                    dp[n] = temp2;
                }
                else
                {
                    ll temp1 = dp[n + 1];
                    ll temp2 = dp[n];
                    dp[n + 1] = dp[n + 1] - dp[i + 2] + dp[i + 1];
                    dp[n] = dp[n] - dp[i + 1] + dp[i];
                    if (dp[n + 1] == dp[n])
                    {
                        if (maximum < w[i])
                        {
                            flag++;
                            maximum = w[i];
                        }
                    }
                    dp[n + 1] = temp1;
                    dp[n] = temp2;
                }
            }
        }

        if (flag == 0)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << maximum << "\n";
        }
    }
}