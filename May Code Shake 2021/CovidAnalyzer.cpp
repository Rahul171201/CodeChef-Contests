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
    vector<ll> fib(100, 0);
    fib[1] = 1;
    fib[2] = 2;
    for (ll i = 3; i < 100; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    while (t--)
    {
        ll n;
        cin >> n;
        cout << fib[n] << "\n";
    }
}