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
        ll k;
        cin >> k;
        ll first = k * (k - 1) + 2;

        ll sum = 0, counter = 0;
        while (counter < k)
        {
            sum = sum + first;
            first += 2;
            counter++;
        }
        cout << sum << "\n";
    }
}