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
        ll n, k;
        cin >> n >> k;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end(), greater<ll>());
        ll start = 0;
        ll count = 0;
        ll sum1 = 0;
        while (count < k)
        {
            count++;
            sum1 = sum1 + v[start];
            start = start + 2;
        }

        start = 1;
        count = 1;
        ll sum2 = 0;
        while (count <= k)
        {
            if (count == k)
            {
                sum2 = sum2 + v[start] + v[start + 1];
                count++;
            }
            else
            {
                count++;
                sum2 = sum2 + v[start];
                start = start + 2;
            }
        }

        ll maxi = max(sum1, sum2);
        cout << maxi << "\n";
    }
}