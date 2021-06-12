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
        ll x, m, d;
        cin >> x >> m >> d;

        ll ans = x + d;
        ll temp = m * x;

        if (ans > temp)
        {
            cout << temp << "\n";
        }
        else
        {
            cout << ans << "\n";
        }
    }
}