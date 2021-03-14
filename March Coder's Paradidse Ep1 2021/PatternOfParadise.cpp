#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll temp = 2 * n - 1;
        ll temp1 = 2 * n - 3;

        for (ll i = 0; i < (temp / 2) + 1; i++)
        {

            if ((n - i) == 1)
            {
                for (ll j = 0; j < temp / 2; j++)
                {
                    cout << "| ";
                }
                cout << 1 << " ";
                for (ll j = 0; j < temp / 2; j++)
                {
                    cout << "| ";
                }
                cout << "\n";
            }
            else
            {
                for (ll j = 0; j < temp - temp1 + i - 1; j++)
                {
                    cout << "| ";
                }

                for (ll j = 0; j < temp1 - 2 * i; j++)
                {
                    cout << n - i << " ";
                }

                for (ll j = 0; j < temp - temp1 + i - 1; j++)
                {
                    cout << "| ";
                }
                cout << "\n";
            }
        }

        for (ll i = 0; i < (temp / 2); i++)
        {
            for (ll j = 0; j < (temp/2)-i; j++)
            {
                cout << "| ";
            }

            for (ll j = 0; j < 2*(i+1)-1; j++)
            {
                cout << i + 2 << " ";
            }

            for (ll j = 0; j < (temp/2)-i; j++)
            {
                cout << "| ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
}