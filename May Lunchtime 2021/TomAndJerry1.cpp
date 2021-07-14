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
        ll a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        ;

        ll x = abs(c - a);
        ll y = abs(d - b);
        ll sum = x + y;

        // cout<<sum<<" ";
        if (sum % 2 == 0)
        {
            if (sum <= k && k % 2 == 0)
            {
                cout << "YES"
                     << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
        }
        else
        {
            if (sum <= k && k % 2 == 1)
            {
                cout << "YES"
                     << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
        }
    }
}