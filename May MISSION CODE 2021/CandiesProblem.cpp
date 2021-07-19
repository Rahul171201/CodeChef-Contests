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

    vector<ll> v(n, 0);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v[i] = x;
    }

    ll minval = INT_MAX, minindex = 0;
    vector<ll> ans(n + 1, 0);
    for (ll i = 0; i < n - 1; i++)
    {

        if (v[i] < v[i + 1])
        {
            ans[i + 1] = ans[i] + 1;
        }
        else
        {
            ans[i + 1] = ans[i] - 1;
        }
    }
    
}