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

        vector<ll> v(n, 0);
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v[i] = x;
        }

        ll ans = 0;

        for (ll i = 0; i < k; i++)
        {
            map<ll, ll> freq;
            ll counter = 0;
            for (ll j = i; j < n; j = j + k)
            {
                counter++;
                auto q = freq.find(v[j]);
                if (q == freq.end())
                {
                    freq.insert({v[j], 1});
                }
                else
                {
                    q->second++;
                }
            }
            ll maxi = INT_MIN;
            for (auto it : freq)
            {
                maxi = max(maxi, it.second);
            }

            ans = ans + (counter - maxi);
            freq.clear();
        }

        cout << ans << "\n";
    }
}