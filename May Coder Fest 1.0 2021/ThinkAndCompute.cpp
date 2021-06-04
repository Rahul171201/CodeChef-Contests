#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll x, y;
    cin >> x >> y;
    ll a = -1;

    string s1 = bitset<64>(x).to_string();
    string s2 = bitset<64>(y).to_string();

    cout << s1 << "\n";
    cout << s2 << "\n";

    for (ll i = 0; i <= x; i++)
    {
        if ((i ^ (x - i)) == y)
        {
            a = i;
            break;
        }
    }

    if (a >= 0)
    {
        ll b = x - a;
        ll ans = (a * b) % mod;
        cout << ans << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
}