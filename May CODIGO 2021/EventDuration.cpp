#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> a, ending(n, 0);

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
        ending[i] = a[i] + k;
    }
    sort(a.begin(), a.end());
    ll hours = k, spent = 0;

    for (ll i = 1; i < n; i++)
    {
        if (a[i]-a[i-1] < k)
            hours = hours + (a[i] - a[i-1]);

        else{
            hours+=k;
        }
    }
    cout << hours << "\n";
}