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
        ll n, m;
        cin >> n >> m;

        vector<ll> v;
        for (ll i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }

        map<ll, ll> remain;
        set<ll> total;
        set<ll> pos;
        for (ll i = m - 1; i >= 0; i--)
        {

            if (total.count(v[i]) == 0)
            {
                total.insert(v[i]);
                remain.insert({v[i], i});
                pos.insert(i);
            }
        }

        ll ans = INT_MAX;
        total.clear();
        auto it = pos.begin();
        ll val = m - *it;
        ans = min(ans, val);

        // cout << ans << "\n";

        for (ll i = 0; i < m; i++)
        {
            ll temp = v[i];
            auto q = remain.find(temp);
            // cout << q->second << "\n";
            pos.erase(q->second);

            if (!pos.empty())
            {
                auto jt = pos.begin();
                // cout << *jt << "\n";
                ll index = m - *jt + i + 1;
                // cout << *it << " " << index << "\n";
                ans = min(ans, index);
            }
            else
            {
                ans = min(ans, i + 1);
            }
        }
        cout << ans << "\n";
    }
}