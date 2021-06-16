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
        string x, y;
        cin >> x >> y;

        map<char, ll> m;
        for (ll i = 0; i < y.size(); i++)
        {

            auto q = m.find(y[i]);
            if (q == m.end())
            {
                m.insert({y[i], 1});
            }
            else
            {
                q->second++;
            }
        }

        ll j = 0;
        bool flag = false;
        for (ll i = 0; i < x.size(); i++)
        {

            if (y[j] == x[i])
            {
                auto q = m.find(y[j]);
                q->second--;
                j++;
                if (q->second == 0)
                {
                    m.erase(q);
                }
            }

            if (m.empty())
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << "AlecWon"
                 << "\n";
        }
        else
        {
            cout << "AlecLost"
                 << "\n";
        }
    }
}