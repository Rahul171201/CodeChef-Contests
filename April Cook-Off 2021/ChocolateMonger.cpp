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
        ll n, x;
        cin >> n >> x;

        set<ll> choco;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            choco.insert(x);
        }

        ll max_s = n - x;

        if (choco.size() >= max_s)
        {
            cout << max_s << "\n";
        }
        else
        {
            cout << choco.size() << "\n";
        }
    }
}