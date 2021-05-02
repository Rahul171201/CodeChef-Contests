#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> start, end;
        set<pair<ll, ll>> activities;
        for (ll i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            start.push_back(a);
            end.push_back(b);
            activities.insert({b, a});
        }

        ll count = 1;
        auto q = activities.begin();
        for (auto it = activities.begin(); it != activities.end(); it++)
        {
            if (q == it)
            {
                continue;
            }

            if (it->second >= q->first)
            {
                count++;
                q = it;
            }
        }

        cout << count << "\n";
    }
}