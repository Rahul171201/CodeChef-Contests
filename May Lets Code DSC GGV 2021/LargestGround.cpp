#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll r, c;
    cin >> r >> c;
    vector<vector<ll>> v(r + 1, vector<ll>(c + 1, 0));
    ll count0 = 0;

    for (ll i = 1; i <= r; i++)
    {
        for (ll j = 1; j <= c; j++)
        {
            ll x;
            cin >> x;
            v[i][j] = x;
            if (x == 0)
            {
                count0++;
            }
        }
    }

    if (count0 == 0)
    {
        cout << 0 << "\n";
    }
    else
    {
        vector<vector<ll>> freq_row(r + 1, vector<ll>(c + 1, 0)), freq_column(r + 1, vector<ll>(c + 1, 0));
        // row-wise
        for (ll i = 1; i <= r; i++)
        {
            for (ll j = 1; j <= c; j++)
            {
                if (v[i][j] == 0)
                {
                    freq_row[i][j] = freq_row[i][j - 1] + 1;
                }
                else
                {
                    freq_row[i][j] = freq_row[i][j - 1];
                }
            }
        }

        // for (ll i = 1; i <= r; i++)
        // {
        //     for (ll j = 1; j <= c; j++)
        //     {
        //         cout << freq_row[i][j] << " ";
        //     }
        //     cout << "\n";
        // }

        // column-wise
        for (ll j = 1; j <= c; j++)
        {
            for (ll i = 1; i <= r; i++)
            {
                if (v[i][j] == 0)
                {
                    freq_column[i][j] = freq_column[i - 1][j] + 1;
                }
                else
                {
                    freq_column[i][j] = freq_column[i - 1][j];
                }
            }
        }

        // for (ll i = 1; i <= r; i++)
        // {
        //     for (ll j = 1; j <= c; j++)
        //     {
        //         cout << freq_column[i][j] << " ";
        //     }
        //     cout << "\n";
        // }

        ll maxsquare = 1;
        ll temp = min(r, c);
        for (ll i = 1; i <= r; i++)
        {
            for (ll j = 1; j <= c; j++)
            {

                ll init = 0;
                if (v[i][j] == 0)
                {
                    init++;
                }
                else
                {
                    continue;
                }
                ll maxk = 1;
                for (ll k = 1; (k + j <= c && k + i <= r); k++)
                {
                    if ((freq_column[i + k][j + k] + freq_row[i + k][j + k] - 1 + init - freq_column[i - 1][j + k] - freq_row[i + k][j - 1]) == ((k + 1) * (k + 1)))
                    {
                        init = freq_column[i + k][j + k] + freq_row[i + k][j + k] - 1 + init - freq_column[i - 1][j + k] - freq_row[i + k][j - 1];
                        maxk = max(maxk, k + 1);
                    }
                    else
                    {
                        break;
                    }
                }
                maxsquare = max(maxsquare, maxk);
            }
        }

        cout << maxsquare * maxsquare << "\n";
    }
}