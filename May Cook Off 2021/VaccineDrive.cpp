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
        ll g, p;
        cin >> g >> p;

        vector<ll> v(11);
        for (ll i = 1; i < 11; i++)
        {
            ll x;
            cin >> x;
            v[i] = x;
        }

        ll vaccine = 0, day = 0, mini, maxi;
        for (ll i = 10; i > 0; i--)
        {

            if (i == g)
            {
                if (vaccine > 0)
                    mini = day;
                else
                    mini = day + 1;
            }

            if (v[i] < vaccine)
            {
                if (i == g)
                {
                    maxi = day;
                }
                vaccine = vaccine - v[i];
                continue;
            }
            else
            {
                // if (vaccine > 0 && v[i] != vaccine)
                // {
                //     day++;
                // }
                v[i] = v[i] - vaccine;
            }

            day = day + v[i] / p;
            vaccine = v[i] % p;

            // cout << day << "\n";
            if (vaccine == 0)
            {
                if (i == g)
                {
                    maxi = day;
                }
                continue;
            }
            else
            {
                day++;
                if (i == g)
                {
                    maxi = day;
                }
                vaccine = p - vaccine;
            }
        }

        cout << mini << " " << maxi << "\n";
    }
}