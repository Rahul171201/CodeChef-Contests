#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

ll fact(ll n)
{
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = res * i;
    return res;
}
ll nCr(ll n, ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        ll ans1 = nCr(n, x);
        ll ans2 = nCr(n, y);
        ll ans = ans1 * ans2;
        cout << ans << "\n";
    }
}