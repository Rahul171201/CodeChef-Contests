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

        for (ll i = 1; i <= n; i++)
        {
            if (i <= n / 2)
            {
                for (ll j = 1; j <= n; j++)
                {
                    if (j == i || j == n + 1 - i)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                cout << "\n";
            }
            else
            {
                for (ll j = 1; j <= n; j++)
                {
                    if (j == i || j == n - i+1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                cout << "\n";
            }
        }
    }
}
