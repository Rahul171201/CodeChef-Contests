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
        ll a, b, k;
        cin >> a >> b >> k;

        ll ans;
        if (k % 2 == 0)
        {
            ans = (k / 2) * (a - b);
        }
        else
        {
            ans = (((k / 2) + 1) * a) - ((k / 2) * b);
        }

        cout << ans << "\n";
    }
}