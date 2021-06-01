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
        unsigned ll n;
        cin >> n;

        n--;
        unsigned ll secondhalf = n / 2;
        unsigned ll firsthalf = n - secondhalf;

        unsigned ll sum = (firsthalf * (2 * 6 + (firsthalf - 1) * 7)) / 2;
        sum = sum + (secondhalf * (2 * 8 + (secondhalf - 1) * 7)) / 2;
        sum++;

        n++;
        unsigned ll ans = pow(n, 2) + sum;
        cout << ans << "\n";
    }
}