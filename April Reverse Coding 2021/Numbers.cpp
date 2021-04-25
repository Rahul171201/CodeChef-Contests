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
        vector<ll> v(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            v[i] = i;
        }

        ll counter = 1;
        for (ll j = 1; j <= (n / 2) + 1; j++)
        {

            for (ll i = 1; i <= n; i++)
            {
                cout << v[i] << " ";
            }
            cout << "\n";

            ll temp = v[counter];
            v[counter] = v[n + 1 - counter];
            v[n + 1 - counter] = temp;
            counter++;
        }
    }
}