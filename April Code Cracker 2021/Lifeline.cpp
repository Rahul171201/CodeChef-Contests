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
        ll a, n, d;
        cin >> a >> n >> d;
        ll x, y, z;
        cin >> x >> y >> z;

        ll temp = d;
        if (a <= 18)
        {
            temp = temp - 10;
        }
        else if (a > 18 && a < 51)
        {
            temp = temp - 14;
        }
        else
        {
            temp = temp - 21;
        }

        if (x + y + z < n)
        {
            if (temp >= 0)
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
        else
        {
            if (x > 0)
            {
                temp = temp - 10;
                if (temp >= 0)
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
            else if (y > 0)
            {
                temp = temp - 14;
                if (temp >= 0)
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
            else
            {
                temp = temp - 21;
                if (temp >= 0)
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
}