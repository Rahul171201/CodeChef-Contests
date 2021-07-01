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
    vector<ll> v;
    set<ll> s;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }

    ll maxval = v[n - 1];
    s.insert(maxval);
    for (ll i = n - 1; i >= 0; i--)
    {
        auto q = s.end();
        q--;
        if (v[i] > *q)
        {
            s.insert(v[i]);
        }
        else
        {
            auto it = s.lower_bound(v[i]);
            s.insert(v[i]);
            v[i] = *it;
        }
    }

    for (ll i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}