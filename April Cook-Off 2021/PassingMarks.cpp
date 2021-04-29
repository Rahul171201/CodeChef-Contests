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
        ll amin, bmin, cmin, tmin, a, b, c;
        cin >> amin >> bmin >> cmin >> tmin >> a >> b >> c;

        ll total = a + b + c;

        if (a >= amin && b >= bmin && c >= cmin && total >= tmin)
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