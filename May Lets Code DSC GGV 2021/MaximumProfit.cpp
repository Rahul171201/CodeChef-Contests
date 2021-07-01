#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    ll maxi = 0;

    vector<ll> v(n, 0);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v[i] = x;
    }

    sort(v.begin(), v.end(), greater<ll>());
    for (ll i = 0; i < n; i++)
    {
        maxi = max(maxi, v[i] * (i + 1));
    }
    cout << maxi << "\n";
}