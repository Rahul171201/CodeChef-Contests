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
        vector<double> a, b;
        for (ll i = 0; i < n; i++)
        {
            double x;
            cin >> x;
            a.push_back(x);
        }
        for (ll i = 0; i < n; i++)
        {
            double x;
            cin >> x;
            b.push_back(x);
        }

        if (n == 2)
        {
            double mini;
            double r1 = a[0] / b[0];
            double r2 = a[1] / b[1];

            if (r1 >= r2)
            {
                mini = 0.0000000;
                cout << fixed << setprecision(15) << mini << "\n";
            }
            else
            {
                r1 = r2;
                double ans = a[0] - r1 * b[0];
                mini = ans * ans;
                cout << fixed << setprecision(15) << mini << "\n";
            }
        }
    }
}
