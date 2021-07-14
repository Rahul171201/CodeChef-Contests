#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

vector<bool> SieveOfEratosthenes(int n)
{
    vector<bool> prime(n + 1, true);

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    return prime;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<bool> ans = SieveOfEratosthenes(1e7 + 1);
    vector<ll> finalans(1e7 + 1, 0);
    for (ll i = 3; i <= 1e7; i++)
    {
        if (ans[i])
        {
            finalans[i] = finalans[i - 1] + 1;
        }
        else
        {
            finalans[i] = finalans[i - 1];
        }
    }

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll start = n / 2;
        ll temp = finalans[n] - finalans[start] + 1;
        cout << temp << "\n";
    }
}