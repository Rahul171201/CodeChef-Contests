#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, x;
    cin >> n >> x;

    vector<ll> a;
    ll sum = x;
    for (ll i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        a.push_back(temp);
        sum = sum + temp;
    }

    if (sum <= 24)
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