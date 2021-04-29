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
        ll n, r;
        cin >> n >> r;

        vector<ll> A, B;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            A.push_back(x);
        }
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            B.push_back(x);
        }

        ll ans = 0;
        ll maximum = INT_MIN;
        for (ll i = 0; i < n - 1; i++)
        {
            ans = ans + B[i];
            if (ans > maximum)
            {
                maximum = ans;
            }
            ans = ans - (r * (A[i + 1] - A[i]));
            if (ans < 0)
            {
                ans = 0;
            }
        }
        ans = ans + B[n - 1];
        if (ans > maximum)
        {
            maximum = ans;
        }
        cout << maximum << "\n";
    }
}