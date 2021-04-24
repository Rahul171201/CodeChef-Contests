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

        vector<ll> initial_fence, final_fence;
        map<ll, ll> m;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            initial_fence.push_back(x);
        }
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            final_fence.push_back(x);
        }

        ll flag = 0;
        for (ll i = 0; i < n; i++)
        {

            if (m.count(initial_fence[i]) == 0)
            {
                m.insert({initial_fence[i], final_fence[i]});
            }
            else
            {
                auto it = m.find(initial_fence[i]);
                if (it->second != final_fence[i])
                {
                    flag++;
                    break;
                }
            }
        }

        if (flag == 0)
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