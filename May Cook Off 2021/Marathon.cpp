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
        ll D, d, A, B, C;
        cin >> D >> d >> A >> B >> C;

        ll ans = D * d;
        if (ans >= 42)
        {
            cout << C << "\n";
        }
        else if (ans >= 21)
        {
            cout << B << "\n";
        }
        else if (ans >= 10)
        {
            cout << A << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }
}