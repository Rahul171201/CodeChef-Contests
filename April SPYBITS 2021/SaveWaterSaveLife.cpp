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
        ll h, x, y, c;
        cin >> h >> x >> y >> c;

        ll temp = y / 2;
        temp = temp + x;
        temp = temp * h;

        if (temp <= c)
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