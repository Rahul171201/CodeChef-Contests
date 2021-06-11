#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

bool countdigits(ll n)
{
    ll first = n % 10;
    ll last = first;
    while (n > 0)
    {
        if (n / 10 == 0)
        {
            last = n;
        }
        n = n / 10;
    }
    if ((first + last) % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;

    if (n < 10)
    {
        cout << n << "\n";
    }
    else
    {
        ll q = n / 10;
        ll ans = 9 + (q - 1) * 5;
        ll r = n % 10;
        ll temp = q * 10;

        for (ll i = temp; i <= temp + r; i++)
        {
            if (countdigits(i))
            {
                ans++;
            }
        }
        cout << ans << "\n";
    }
}