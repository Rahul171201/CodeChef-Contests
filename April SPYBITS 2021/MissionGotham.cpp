#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<ll> district(n + 1, 0);
    set<int> remain;
    for (int i = 1; i <= n; i++)
    {
        remain.insert(i);
    }

    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        district[i] = x;
    }

    int q;
    cin >> q;
    ll x, k;
    while (q--)
    {

        cin >> x >> k;

        ll sum = 0;
        auto it = remain.lower_bound(x);
        while (it != remain.end())
        {
            auto temp = it;
            temp++;
            ll dis = *it - x;
            if (district[*it] >= k)
            {
                district[*it] = district[*it] - k;
                if (district[*it] == 0)
                    remain.erase(*it);
                sum = sum + dis * (k);
                break;
            }
            else
            {
                k = k - district[*it];
                sum = sum + dis * (district[*it]);
                district[*it] = 0;
                remain.erase(*it);
            }
            it = temp;
        }

        cout << sum << "\n";
    }
}