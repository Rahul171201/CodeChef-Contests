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
        ll l, b;
        cin >> l >> b;
        ll total = l * b;
        ll ans = total, maxi = 1;

        maxi = __gcd(l,b);
        maxi = maxi*maxi;
        ans = total/maxi;

        cout << ans << "\n";
    }
}