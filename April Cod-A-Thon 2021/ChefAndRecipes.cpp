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
        if (n % 2 == 0)
        {

            ll temp1 = (n + 1) / 2;
            ll temp2 = (n - 1) / 2;

            ll ans1 = (temp1) * (temp1 + 1) / 2;
            ans1 = ans1 * 4;
            ll ans2 = (temp2) * (temp2 + 1) / 2;
            ans2 = ans2 * 4;

            ll ans = (ans1 + ans2) / 2;

            cout << ans << "\n";
        }
        else
        {
            ll temp = n / 2;
            ll ans = (temp) * (temp + 1) / 2;
            ans = ans * 4;

            cout << ans << "\n";
        }
    }
}