#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

long long int power(long long int x, long long int y)
{
    long long int temp;
    if (y == 0)
        return 1;
    temp = (power(x, y / 2)) % 1000000007;
    if (y % 2 == 0)
        return (temp * temp) % 1000000007;
    else
        return (((x * temp) % 1000000007) * temp) % 1000000007;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll temp = power(2, n-1);
        cout << temp << "\n";
    }
}