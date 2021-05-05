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
        ll n, w, wr;
        cin >> n >> w >> wr;
        vector<ll> weights;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            weights.push_back(x);
        }

        if (wr >= w)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            sort(weights.begin(), weights.end());
            ll sum = 0;
            ll req = w - wr;
            bool flag = false;
            for (ll i = 0; i < n - 1; i++)
            {
                if (weights[i] == weights[i + 1])
                {
                    sum = sum + 2 * weights[i];
                    i++;
                }

                if (sum >= req)
                {
                    flag = true;
                    break;
                }
            }

            if (flag == true)
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
}