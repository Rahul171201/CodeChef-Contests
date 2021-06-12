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
        ll n, k, f;
        cin >> n >> k >> f;

        ll count = 0;
        set<pair<ll, ll>> inv;
        ll end = 0;
        while (n--)
        {
            ll s, e;
            cin >> s >> e;
            inv.insert({s, e});
        }

        for (auto it : inv)
        {

            if (it.first > end)
            {
                ll dif = it.first - end;
                count = count + dif;
            }
            if (it.second > end)
            {
                end = it.second;
            }
        }

        ll dif_temp = f - end;
        if (dif_temp > 0)
        {
            count = count + dif_temp;
        }

        if (count >= k)
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