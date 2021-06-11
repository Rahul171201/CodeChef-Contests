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
    bool flag = false;

    ll max_sum = 0;
    ll total = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x >= 0)
        {
            max_sum += x;
            flag = true;
        }
        if (total < x)
        {
            total = x;
        }
    }

    if (flag)
        cout << max_sum << "\n";
    else
    {
        cout << total << "\n";
    }
}