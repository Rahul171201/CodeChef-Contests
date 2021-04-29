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
        ll x, y;
        cin >> x >> y;

        ll n = 1;
        ll counter=1;
        while (n < x + y)
        {
            counter++;
            n = counter * counter; 
        }

        if (n == x + y)
        {
            ll n_square = n;
            n = sqrt(n);
            if (n == 1)
            {
                if (x == 1 && y == 0)
                {
                    cout << "YES"
                         << "\n";
                    cout << 1 << "\n";
                }
            }
            else
            {
                ll even = 1;
                ll odd = n - 1;
                ll ans = -1;
                while (odd >= 1)
                {
                    ans = even * odd * 2;
                    if (ans == y)
                    {
                        cout << "YES"
                             << "\n";
                        break;
                    }
                    odd--;
                    even++;
                }

                if (ans == y)
                {
                    cout << n << "\n";
                    ll temp = 0;
                    for (ll i = 1; i <= odd; i++)
                    {
                        cout << 1 << " " << i + 1 << "\n";
                        temp = i;
                    }
                    for (ll j = temp + 2; j <= n; j++)
                    {
                        cout << 2 << " " << j << "\n";
                    }
                }
                else
                {
                    cout << "NO"
                         << "\n";
                }
            }
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
}